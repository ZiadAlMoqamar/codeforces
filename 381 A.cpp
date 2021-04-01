#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	vector <int> cards;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		cards.push_back(x);
	}
	int ser = 0, dima = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			if (cards[0] > cards.back())
			{
				ser += cards[0];
				cards.erase(cards.begin());
			}

			else
			{
				ser += cards.back();
				cards.erase(cards.end()-1);
			}
		}
		else
		{
			if (cards[0] > cards.back())
			{
				dima += cards[0];
				cards.erase(cards.begin());
			}

			else
			{
				dima += cards.back();
				cards.erase(cards.end()-1);
			}
		}
	}
	cout << ser << " " << dima;

	
	return 0;
}

