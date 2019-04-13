#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, sum=0;
	string s;
	cin >> n;
	cin.ignore();
	getline(cin, s);
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i + 1] == s[i] && s[i] == 'R')
		{
			sum++;
			continue;
		}
		else if (s[i + 1] == s[i] && s[i] == 'G')
		{
			sum++;
			continue;
		}
		else if (s[i + 1] == s[i] && s[i] == 'B')
		{
			sum++;
			continue;
		}
	}
	

	
	cout << sum;
	return 0;
}
