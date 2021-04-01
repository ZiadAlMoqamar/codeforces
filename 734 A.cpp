#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, a=0, d=0;
	string s;
	cin >> n;
	cin.ignore();
	getline(cin, s);
	for (int i = 0; i <= s.length() - 1; i++)
	{
		if (s[i] == 'A')
		{
			a++;
			continue;
		}
		else
			d++;
	}
	if (a > d)
	{
		cout << "Anton";
		return 0;
	}
	else if (a < d)
	{
		cout << "Danik";
		return 0;
	}
	else
	{
		cout << "Friendship";
		return 0;
	}

	
}
