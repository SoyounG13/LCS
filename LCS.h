#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class LCS
{
private:
	int** c;
	int** b;

public:
	string X;
	string Y;
	bool Input();
	void Check();
	void LCS_LENGTH();
	int PRINT_LCS(int i, int j);
	void Print();
};
