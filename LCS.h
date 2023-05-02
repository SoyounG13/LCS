#pragma once
#include <iostream>
#include <string>
using namespace std;

class LCS
{
private:
	int** c;
	int** b;

public:
	string X;
	string Y;
	void Input();
	void LCS_LENGTH();
	int PRINT_LCS(int i, int j);
	void Print();
};
