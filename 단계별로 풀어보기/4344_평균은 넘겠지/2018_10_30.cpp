#include <iostream>

using namespace std;

int main()
{
	int query, num, arr[1001] = { 0 };
	
	cin >> query;
	for (int i = 0; i <query; i++)
	{
		double percentage = 0.0, avg = 0.0;
		int avsum=0, persum=0;
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			scanf_s("%d", &arr[j]);
			avsum += arr[j];
		}
		avg = (double)avsum/ (double)num;
		for (int j = 0; j < num; j++)
		{
			if (arr[j] > avg)
				persum++;
		}
		percentage =(double)persum/ (double)num;
		percentage *= 100;
		printf("%.3lf%%\n", percentage);
	}

	system("pause");
	return 0;
}