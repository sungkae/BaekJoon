#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;
		for (int i=0; i<input.size(); i++)
		{	
			cout << input[i];
			if (i % 10 == 9)
			{
				cout << "\n";
			}
		}
		cout << "\n";
	system("pause");
	return 0;
}