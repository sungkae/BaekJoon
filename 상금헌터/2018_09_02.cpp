#include<iostream>

using namespace std;

class Price
{
private:
	int a, b,allPrice=0;
	int price_A[6] = { 5000000,3000000,2000000,500000,300000,100000 };
	int price_B[5] = { 5120000,2560000,1280000,640000,320000 };

	int firstContest(int a)
	{
		int result = 0;
		if (a == 0)
		{
			return 0;
		}

		if (a == 1)
		{
			result = price_A[0];
		}
		else if (a <= 2)
		{
			result = price_A[1];
		}
		else if (a <= 6)
		{
			result = price_A[2];
		}
		else if (a <= 10)
		{
			result = price_A[3];
		}
		else if (a <= 15)
		{
			result = price_A[4];
		}
		else if (a <= 21)
		{
			result = price_A[5];
		}
		return result;
	}

	int secondContest(int b)
	{
		int result = 0;
		if (b == 0)
		{
			return 0;
		}
		
		if (b == 1)
		{
			result = price_B[0];
		}
		else if (b <= 3)
		{
			result = price_B[1];
		}
		else if (b <= 7)
		{
			result = price_B[2];
		}
		else if (b <= 15)
		{
			result = price_B[3];
		}
		else if (b <= 31)
		{
			result = price_B[4];
		}

		return result;
	}
public:
	void setA(int a_a)
	{
		a = a_a;
	}
	void setB(int a_b)
	{
		b = a_b;
	}

	void getSum()
	{
		int first = firstContest(a);
		int second = secondContest(b);
		allPrice = first + second;
	}
	void getPrice()
	{
		cout << allPrice << endl;
	}
};

int main()
{
	int query,a, b;
	cin >> query;
	for (int i = 0; i < query; i++) {
		cin >> a >> b;

		if (a<1 || a >100)
		{
			a = 0;
		}
		if (b <1 || b>64)
		{
			b = 0;
		}
		Price JayZ;
		JayZ.setA(a);
		JayZ.setB(b);
		JayZ.getSum();
		JayZ.getPrice();
	}

	system("pause");
	return 0;
}