#include <iostream>

using namespace std;


int arr[1000001] = { 0 };

int solution(int num)
{
	if (num == 1)
	{
		return 0;
	}
	if (arr[num] > 0)
		return arr[num];
	arr[num] = solution(num-1) + 1;
	if (num % 3 == 0)
	{
		int temp = solution(num /3) + 1;
		if (arr[num] > temp) arr[num] = temp;
	}
	else if (num % 2 == 0)
	{
		int temp = solution(num / 2) + 1;
		if (arr[num] > temp) arr[num] = temp;
	}
	return arr[num];
}

int main()
{
	int num;
	cin >> num;
	int ans = solution(num);
	cout << ans << endl;

	system("pause");
	return 0;
}

