#include <iostream>

using namespace std;

int main()
{
	int n, max=0;
	double sum = 0.0;
	cin >> n;
	int i = n;
	while (i--)
	{
		int a;
		cin >> a;
		if (max < a)
			max = a;
		sum += a;
	}
	double result = sum * 100 / max/n;
	cout << result << endl;
	system("pause");
	return 0;
}