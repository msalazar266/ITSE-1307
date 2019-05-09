// MRSblackjack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE - 1307 Spring 2019
20190501
			This is BLACKJACK!

			Pseudo Code :
			1. Ask player for name.
			2. Ask player for by in.
			3. Deal cards.
			4. Hit or not.
			5. Win or lose.
			6. Ask player to play again.

*/

#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
using namespace std;

int main()
{
	srand(time(NULL));

	Player objDealer;
	Player objPlayer;
	Deck objDeck = Deck(4);
	string strName = "";
	char chrPlay = ' ';
	char chrHitStay = ' ';
	char chrPlayAgain = ' ';
	int intBuyInAmount = 0;
	int intBetAmount = 0;

	objDeck.shuffle();	//Deck is shuffled
	
	//Intro display
	cout << "Want to play Blackjack? Yeh, Okay cool? Yes(Y/y) or No(N/n)";	//Asks user if they want to play
	cin >> chrPlay;
	tolower(chrPlay);
	cout << endl << endl;
	cout << "************************************************** " << endl;
	
	if (chrPlay == 'n') {	//Either way, you'll play
		cout << "Nope you're playing." << endl;
		chrPlay = 'y';
		cout << endl << endl;
	}

	objDealer.setPlayerName("DEALER");	//Dealer name set to DEALER

	cout << "Enter your name for this game: ";	//Use inputs their name
	cin >> strName;
	objPlayer.setPlayerName(strName);	//Players name set to the previous input
	cout << endl << endl;
	
	//Buy in input and validation
	do {

		cout << "Enter your buy in amount($0 - $50000): $";	//Asks user for a buy in amount
		cin >> intBuyInAmount;
		cout << endl << endl;

		if (cin.fail()) {	// User didn't input a number
			cout << "Error! Please enter a vaild amount!" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> intBuyInAmount;
		}

		objPlayer.setMoney(intBuyInAmount);	//Buy in amount is set to previous input
		objDealer.setMoney(intBuyInAmount);	//Dealer amount of money is set to previous input

	} while (cin.fail() == true);

	//Main part of game
	while (chrPlay == 'y') {
		objDealer.clearHand();
		objPlayer.clearHand();

		cout << "DEALER has $" << objPlayer.getMoney() << endl;
		cout << "You have $" << objDealer.getMoney() << endl;
		cout << endl << endl;
		
		//Bet input and validation
		do {
			cout << "Place your bet: $";	//Asks user for bet
			cin >> intBetAmount;
			cout << endl << endl;
			

			if (cin.fail()) {	// User didn't input a number
				cout << "Error! Please enter a vaild amount!" << endl;
				cin.clear();
				cin.ignore(256, '\n');
				cin >> intBetAmount;
			}

			objPlayer.setBet(intBetAmount);	//Bet amount set to previous input

		} while (intBetAmount > objPlayer.getMoney());

		for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {	//Cards dealt
			objDealer.addCard(objDeck.getCard());
			objPlayer.addCard(objDeck.getCard());
		}

		while (objDealer.getHandPointValue() <= 16 && objDealer.getNumberCards() < 5) {	//Dealer gets cards while point value is less than 16 and can't have more than 5 cards
			objDealer.addCard(objDeck.getCard());
		}

		cout << objDealer.toString() << endl;	//Outputs dealer hand
		cout << objPlayer.toString() << endl;	//Outputs player hand

		//If player gets 21 initally
		if (objPlayer.getHandPointValue() == 21) {
			cout << "BLACKJACK!" << endl;
			objPlayer.Blackjack(intBetAmount);
			objDealer.LoseBet(intBetAmount * 1.5);
			cout << endl << endl;
			
			chrHitStay = 's';
		}

		//Asks user for hit or stay
		do {
			cout << endl << endl;
			cout << "Hit(H/h) or Stay(S/s)?";
			cin >> chrHitStay;
			chrHitStay = tolower(chrHitStay);
			cout << endl << endl;
			
			//Hit or stay options
			switch (chrHitStay) {

			case 'h':	//Player hits
				cout << objPlayer.getPlayerName() << " HITS!\n" << endl;
				objPlayer.addCard(objDeck.getCard());
				break;

			case 's': //Player stays
				cout << objPlayer.getPlayerName() << " STAYS!\n" << endl;
				break;
			}
		
			cout << objDealer.toString() << endl;	//Outputs dealer hand
			cout << objPlayer.toString() << endl;	//Outputs player hand
			
		} while (chrHitStay == 'h');

		//Deck will shuffle if need be
		if (objDeck.shouldShuffle()) {
			objDeck.shuffle();
		}
		//Point value check for winner(s)
		if (objDealer.getHandPointValue() <= 21 && objPlayer.getHandPointValue() <= 21) {
			if (objDealer.getHandPointValue() > objPlayer.getHandPointValue()) {	//Dealer wins
				cout << "\nDEALER WINS!" << endl;
				objPlayer.LoseBet(intBetAmount);
				objDealer.WinBet(intBetAmount);
				cout << endl << endl;
			}
			if (objDealer.getHandPointValue() < objPlayer.getHandPointValue()) {	//Player wins
				cout << "\nYOU WIN!" << endl;
				objPlayer.WinBet(intBetAmount);
				cout << endl << endl;
			}
		}
		else if (objDealer.getHandPointValue() <= 21 && objPlayer.getHandPointValue() > 21) {	//Dealer wins
			cout << "\nDEALER WINS!" << endl;
			objPlayer.LoseBet(intBetAmount);
			objDealer.WinBet(intBetAmount);
			cout << endl << endl;
		}
		else if (objDealer.getHandPointValue() > 21 && objPlayer.getHandPointValue() > 21) {	//Dealer wins
			cout << "\nDEALER WINS!" << endl;
			objPlayer.LoseBet(intBetAmount);
			objDealer.WinBet(intBetAmount);
			cout << endl << endl;
		}
		else if (objDealer.getHandPointValue() > 21 && objPlayer.getHandPointValue() <= 21) {	//Player wins
			cout << "\nYOU WIN!" << endl;
			objPlayer.WinBet(intBetAmount);
			objDealer.LoseBet(intBetAmount);
			cout << endl << endl;
		}
		else if (objDealer.getHandPointValue() == objPlayer.getHandPointValue()) {	//Push/draw, dealer still wins
			cout << "/nDEALER WINS!" << endl;
			objPlayer.LoseBet(intBetAmount);
			objDealer.WinBet(intBetAmount);
			cout << endl << endl;
		}

		//Dealer is out of money
		if (objDealer.getMoney() <= 0) {	//Exits game
			cout << "\nCONGRATS, YOU ROBBED THE DEALER!" << endl;
			chrPlayAgain = 'n';
			exit(chrPlayAgain = 'n');
			cout << endl << endl;
			cout << "************************************************** " << endl;
		}

		//Asks player if they want to play again
		if (objPlayer.getMoney() > 0) {
			cout << "\nWant to play More? Yes(Y/y) or No(N/n)";
			cin >> chrPlayAgain;
			chrPlayAgain = tolower(chrPlayAgain);
			cout << endl << endl;
			cout << "************************************************** " << endl;

			if (chrPlayAgain == 'n') {	//Exits game
				cout << "Peace out!" << endl;
				cout << "************************************************** " << endl;
				exit(chrPlayAgain = 'n');
			}
		}
		else {	//Exits game if player is out of money
			cout << "Nope you're broke.. Go get more money!" << endl;
			chrPlayAgain = 'n';
			exit(chrPlayAgain = 'n');
			cout << endl << endl;
			cout << "************************************************** " << endl;
		}

	}

	return 0;
}
