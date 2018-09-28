#include <iostream>

using namespace std;

int main()
{
	int testcase;
	int DP[15] = { 0 };
	int max = 0;

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	cin >> testcase;

	int *num = (int*)malloc(sizeof(int)*testcase);

	for (int i = 0; i < testcase; i++)
	{
		cin >> num[i];
		max = (max < num[i] ? num[i] : max);
	}

	for (int i = 4; i <= max; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
	}

	for (int i = 0; i < testcase; i++)
	{
		cout << DP[num[i]] << endl;
	}

	free(num);
	system("pause");
	return 0;
}