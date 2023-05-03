#include "LCS.h"
using namespace std;

int main()
{
	LCS lcs;
	if (!lcs.Input())
		return 0;
	lcs.LCS_LENGTH();
	lcs.Print();
}