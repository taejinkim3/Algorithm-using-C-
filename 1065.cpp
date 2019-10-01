#include<iostream>

using namespace std;

int Han(int n);

int main(void)
{
	int input, res;
	cin >> input;
	res = Han(input);
	cout << res;
	return 0;
}

int Han(int n) {
	int i, cnt = 0, hund, ten, one;
	if (n < 100)
	{
		return n;
	}
	else
	{
		for (i = 100; i <= n; i++)
		{
			hund = i / 100;
			ten = (i % 100) / 10;
			one=(i % 100) % 10;
			if ((ten - hund) == (one - ten))
			{
				cnt++;
			}
		}
		return(99 + cnt);
	}

}