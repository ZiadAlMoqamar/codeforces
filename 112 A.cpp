#include <iostream>
#include <string>

using namespace std;
int main()
{
	int x1 = 0;
	int x2 = 0;
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i <= s1.length() - 1; i++)
	{
		if (s1[i]>='A'&& s1[i]<='Z')
		{
			s1[i] = s1[i] + 32;
		}
	}

	
	for (int n = 0; n <= s2.length() - 1; n++)
	{
		if (s2[n] >= 'A'&& s2[n] <= 'Z')
		{
			s2[n] = s2[n] + 32;
		}
	}
	
	if (s1 > s2)
		cout << "1";
	else if (s1 < s2)
		cout << "-1";
	else
		cout << "0";

	return 0;
}
