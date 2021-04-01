#include <iostream>
#include <string>


using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		string s2;
		cin >> s;

		int x = s.length();
		
		if (s.length() > 10)
		{
			string s3 = to_string(x-2);
			char f = s[0];
			char l = s[s.length() - 1];
			s2 = f + s3 + l;

		}
		else
		{
			s2 = s;
		}

		cout << s2 << endl;
	}
	return 0;
}
