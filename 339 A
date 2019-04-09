#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	cin >> s;
	//declaring counters for each number
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	//exit condition in case of 1 number only (for speed)
	if (s.length() == 1)
	{
		cout << s;
		return 0;
	}
	//itteration on string to count each number
	for (int i = 0; i <= s.length() - 1; i++)
	{
		//continue for speed
		if (s[i] == '+')
			continue;
		else if (s[i] == '1')
			x1++;
		else if (s[i] == '2')
			x2++;
		else if (s[i] == '3')
			x3++;
	}
	//printing '1'
	//I used 2 itterators 'x1' for speed & 'n1' in case number '1' only entered multiple times
	for (int n1 = 0; (x1 != 0) && (n1 <= s.length() - 1); n1++)
	{
		//to place '+' in the correct place
		if (n1 % 2 == 1)
			cout << "+";
		else
		{
			cout << "1";
			//decreasing the itterator x1
			x1--;
		}
		//for speed
		if ((x1==0)&&(x2 == 0 && x3 == 0))
			return 0;
		//to place '+' after last '1' if there is other numbers
		if (x1 == 0 &&( x2 > 0 || x3 > 0))
			cout << "+";
	}
	//printing '2'
	for (int n2 = 0; (x2 != 0) && (n2 <= s.length() - 1); n2++)
	{
		if (n2 % 2 == 1)
			cout << "+";
		else
		{
			cout << "2";
			x2--;
		}
		if ((x2 == 0)&&(x3==0))
			return 0;
		if (x2 == 0 && x3 > 0)
			cout << "+";
	}
	
	for (int n3 = 0; (x3 != 0) && (n3 <= s.length() - 1); n3++)
	{
		if (n3 % 2 == 1)
			cout << "+";
		else
		{
			cout << "3";
			x3--;
		}
	}
	return 0;
}

