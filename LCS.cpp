#include "LCS.h"

void LCS::Input()
{
	cout << "기준 DNA : ";
	cin >> X;
	cout << "비교 DNA : ";
	cin >> Y;
}
void LCS::LCS_LENGTH()
{
	int m = X.length();
	int n = Y.length();
	X = "Z" + X;
	Y = "Z" + Y;
	c = new int* [m];
	for (int i = 0; i <= m; i++)
		c[i] = new int[n+1];
	b = new int* [m]; 
	for (int i = 0; i <= m; i++)
		b[i] = new int[n+1];

	for (int i = 1; i <= m; i++)
		c[i][0] = 0;
	for (int j = 1; j <= n; j++)
		c[0][j] = 0;

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (X[i] == Y[j])
			{
				c[i][j] = c[i - 1][j - 1] + 1;
				b[i][j] = 1;
			}
			else if (c[i - 1][j] >= c[i][j - 1])
			{
				c[i][j] = c[i - 1][j];
				b[i][j] = 2;
			}
			else
			{
				c[i][j] = c[i][j - 1];
				b[i][j] = 3;
			}
		}
	}

}
int LCS::PRINT_LCS(int i, int j)
{
	if (i == 0 || j == 0)
		return 0;
	if (b[i][j] == 1)
	{
		PRINT_LCS(i - 1, j - 1);
		cout << X[i];
	}
	else if (b[i][j] == 2)
		PRINT_LCS(i - 1, j);
	else
		PRINT_LCS(i, j - 1);
}
void LCS::Print()
{
	cout << "유사도 = " << c[X.length() - 1][Y.length() - 1] << ", LCS = ";
	PRINT_LCS(X.length() - 1, Y.length() - 1);
}