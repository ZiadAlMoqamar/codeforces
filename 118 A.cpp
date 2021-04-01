#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i <= s.length() - 1; i++)
	{
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'U' || s[i] == 'I' || s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'y' || s[i] == 'u' || s[i] == 'i')
		{
			
			continue;
		}
		else if (s[i] >= 'A'&& s[i] <= 'Z')
		{
			
			cout << ".";
			char x = s[i] + 32;
			cout << x;
			

		}
		else
		{
			cout<< ".";

			cout<< s[i];
			
		}

	}


	

	return 0;
}
