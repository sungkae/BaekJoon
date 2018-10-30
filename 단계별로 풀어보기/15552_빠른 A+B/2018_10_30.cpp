#include <iostream>

using namespace std;

int main()
{
	int a,b,n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	system("pause");
	return 0;
}