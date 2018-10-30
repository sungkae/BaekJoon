#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a < x)
		{
			arr.push_back(a);
		}
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout <<arr[i] << " ";
	}
	cout << "\n";
	system("pause");
	return 0;
}