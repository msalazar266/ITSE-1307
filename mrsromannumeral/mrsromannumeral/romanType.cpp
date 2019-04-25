#include "pch.h"
#include "romanType.h"


romanType::romanType() {
	dblNumeral = 0.0f;
}


romanType::~romanType() {
	dblNumeral = 0.0f;
}


std::string romanType::toString() {
	return "";
}


float romanType::getValue() {
	return this->dblNumeral;
}


std::string romanType::getString() {
	return this->toString();
}


void romanType::set(float dblpNumber) {
	if (dblpNumber < 0.0f) {
		dblpNumber = 0.0;
	}
	this->dblNumeral = dblpNumber;
}


void romanType::set(std::string strNumber) {

	double dblSum = 0.0;
	double dblCurrent = 0.0;
	double dblLast = 1000.0;
	
	for (int intIndex = 0; intIndex < strNumber.size(); intIndex++) {
		
		switch (strNumber.at(intIndex)) {
		
		case 'M': case 'm':
			dblCurrent = 1000;
			break;

		case 'D': case 'd':
			dblCurrent = 500;
			break;

		case 'C': case 'c':
			dblCurrent = 100;
			break;

		case 'L': case 'l':
			dblCurrent = 50;
			break;

		case 'X': case 'x':
			dblCurrent = 10;
			break;

		case 'V': case 'v':
			dblCurrent = 5;
			break;

		case 'I': case 'i':
			dblCurrent = 1;
			break;
		}
		if (dblLast < dblCurrent) {
			dblSum -= dblLast;
			dblSum += dblCurrent - dblLast;
		}
		else {
			dblSum += dblCurrent;
		}

		dblLast = dblCurrent;

	}
	set(dblSum);
}
