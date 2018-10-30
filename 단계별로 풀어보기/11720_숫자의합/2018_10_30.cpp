#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, sum = 0;
	string m;
	cin >> n >> m;

	for (int i = 0; i <n; i++)
	{
		sum += (m[i]-48);
	}
	cout << sum << endl;
	system("pause");
	return 0;
}