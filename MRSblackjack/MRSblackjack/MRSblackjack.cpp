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
	char chrHit = ' ';
	char chrPlayAgain = ' ';
	double dblBuyInAmount = 0;
	double dblBetAmount = 0;

	//Intro display and name input.
	cout << "Want to play Blackjack? Yeh, Okay cool? Yes(Y/y) or No(N/n)";
	cin >> chrPlay;
	tolower(chrPlay);
	cout << endl << endl;
	cout << "************************************************** " << endl;
	if (chrPlay == 'n') {	//Either way, you'll play
		cout << "Nope you're playing." << endl;
		chrPlay = 'y';
		cout << endl << endl;
		//exit(chrPlay == 'n');
	}

	objDealer.setPlayerName("DEALER");

	cout << "Enter your name: ";
	cin >> strName;
	objPlayer.setPlayerName(strName);
	cout << endl << endl;
	cout << "************************************************** " << endl;

	cout << "Enter your buy in amount: $";
	cin >> dblBuyInAmount;
	objPlayer.setMoney(dblBuyInAmount);
	cout << endl << endl;
	cout << "************************************************** " << endl;

	objDeck.shuffle();

	//Main part of game.
	while (chrPlay == 'y') {
		objDealer.clearHand();
		objPlayer.clearHand();

		cout << "You have $" << objPlayer.getMoney() << endl;
		cout << endl << endl;
		cout << "************************************************** " << endl;

		do {
			cout << "Place your bet: $";
			cin >> dblBetAmount;
			cout << endl << endl;
			cout << "************************************************** " << endl;

			if (!cin) {
				cout << "No, number..";
				cout << endl << endl;
				cout << "************************************************** " << endl;
			}

			objPlayer.setBet(dblBetAmount);

		} while (dblBetAmount > objPlayer.getMoney());

		for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {
			objDealer.addCard(objDeck.getCard());
			objPlayer.addCard(objDeck.getCard());
		}

		while (objDealer.getHandPointValue() <= 16 && objDealer.getNumberCards() < 5) {
			objDealer.addCard(objDeck.getCard());
		}

		cout << objDealer.toString() << endl;	//Outputs dealer hand
		cout << objPlayer.toString() << endl;	//Outputs player hand

		if (objPlayer.getHandPointValue() == 21) {	//Player gets 21 initally
			cout << "BLACKJACK!" << endl;
			objPlayer.Blackjack(dblBetAmount);
			cout << endl << endl;
			cout << "************************************************** " << endl;
		}

		//To hit or not to hit
		do {
			cout << endl << endl;
			cout << "Hit? Yes(Y/y) or No(N/n)";
			cin >> chrHit;
			chrHit = tolower(chrHit);
			cout << endl << endl;
			cout << "************************************************** " << endl;

			if (chrHit == 'y') {	//Player hits
				objPlayer.addCard(objDeck.getCard());
			}

			cout << objDealer.toString() << endl;	//Outputs dealer hand
			cout << objPlayer.toString() << endl;	//Outputs player hand


		} while (chrHit == 'y');


		if (objDeck.shouldShuffle()) {	//Deck will shuffle if need be
			objDeck.shuffle();
		}
		//Point value check
		if (objDealer.getHandPointValue() <= 21 && objPlayer.getHandPointValue() <= 21) {
			if (objDealer.getHandPointValue() > objPlayer.getHandPointValue()) {	//Dealer wins
				cout << "Dealer wins!" << endl;
				objPlayer.LoseBet(dblBetAmount);
				cout << endl << endl;
				cout << "************************************************** " << endl;
			}
			if (objDealer.getHandPointValue() < objPlayer.getHandPointValue()) {	//Player wins
				cout << "You win!" << endl;
				objPlayer.WinBet(dblBetAmount);
				cout << endl << endl;
				cout << "************************************************** " << endl;
			}
		}
		else if (objDealer.getHandPointValue() <= 21 && objPlayer.getHandPointValue() > 21) {	//Dealer wins
			cout << "Dealer wins!" << endl;
			objPlayer.LoseBet(dblBetAmount);
			cout << endl << endl;
			cout << "************************************************** " << endl;
		}
		else if (objDealer.getHandPointValue() > 21 && objPlayer.getHandPointValue() > 21) {	//Dealer wins
			cout << "Dealer wins!" << endl;
			objPlayer.LoseBet(dblBetAmount);
			cout << endl << endl;
			cout << "************************************************** " << endl;
		}
		else if (objDealer.getHandPointValue() > 21 && objPlayer.getHandPointValue() <= 21) {	//Player wins
			cout << "You win!" << endl;
			objPlayer.WinBet(dblBetAmount);
			cout << endl << endl;
		}
		else if (objDealer.getHandPointValue() == objPlayer.getHandPointValue()) {	//Push/draw
			cout << "Push!" << endl;
			cout << endl << endl;
			cout << "************************************************** " << endl;
		}

		if (objPlayer.getMoney() > 0) {	//Asks player if they want to play again
			cout << "Want to play MOAR? Yes(Y/y) or No(N/n)";
			cin >> chrPlayAgain;
			chrPlayAgain = tolower(chrPlayAgain);
			cout << endl << endl;
			cout << "************************************************** " << endl;

			if (chrPlayAgain == 'n') {	//Exits game
				cout << "Peace!" << endl;
				exit(chrPlayAgain = 'n');
			}
		}
		else {	//Exits game, no more money
			cout << "Nope you're broke.. Later" << endl;
			chrPlayAgain = 'n';
			exit(chrPlayAgain = 'n');
			cout << endl << endl;
			cout << "************************************************** " << endl;
		}

	}

	return 0;
}
