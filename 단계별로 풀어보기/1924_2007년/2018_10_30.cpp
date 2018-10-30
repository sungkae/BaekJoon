#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int lastDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	const string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	
	int month, day, answer=0;
	cin >> month >>day;

	for (int i = 1; i < month; i++)
	{
		answer += lastDay[i-1];
	}
	answer += day;
	string result = week[(answer-1)%7];
	cout << result << endl;
	system("pause");
	return 0;
}