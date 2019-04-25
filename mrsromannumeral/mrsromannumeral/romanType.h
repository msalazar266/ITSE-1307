#pragma once
#include <iostream>
#include <string>

class romanType {
public:
	romanType();
	~romanType();
private:
	float dblNumeral;
public:
	std::string toString();
	float getValue();
	std::string getString();
	void set(float dblNumber);
	void set(std::string strNumber);
};
