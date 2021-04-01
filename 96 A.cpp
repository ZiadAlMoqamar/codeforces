#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	cin >> s;
	int x1 = 0;
	int x2 = 0;
	for (int i =0 ;i<=s.length()-1 ;i++)
	{
		if (s[i] == '0')
		{
			x1++;
			x2 = 0;
			if (x1 == 7)
			{
				cout << "YES";
				return 0;
			}
		}
		else
		{
			x2++;
			x1 = 0;
			if (x2 == 7)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}
