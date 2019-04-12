#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int n;
	int flag1 = 1;
	int flag2 = 0;
	string s;
	cin >> n;
	s = to_string(n);
	for(int i=0; i<=s.length()-1 ;i++)
	{
		if (s[i] ==  '4'|| s[i] == '7')
		{
			continue;
        }
		else
		{
			flag1 = 0;
			break;
		}
	}
	if (n % 4 == 0 || n % 7 == 0)
		flag2 = 1;

	if (flag1 == 1 || flag2 == 1)
	{
		cout << "YES";
		return 0;
	}
	else if (n % 47 == 0)
	{
		cout << "YES";
		return 0;
	}
	else
		cout << "NO";
	

	return 0;

}

