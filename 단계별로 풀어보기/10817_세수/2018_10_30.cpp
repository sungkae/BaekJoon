#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> input;
	for (int i = 0; i < 3; i++)
	{
		int n;
		cin >> n;
		input.push_back(n);
	}
	sort(input.begin(), input.end());
	cout << input[1] <<endl;

	system("pause");
	return 0;
}