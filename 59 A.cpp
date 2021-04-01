#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string input;
	int lowernum = 0, uppernum = 0;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++)
	{
		if (isupper(input[i]))
			uppernum++;
		else
			lowernum++;
	}
	if (uppernum > lowernum)
	{
		transform(input.begin(), input.end(), input.begin(), toupper);
	}
	else
	{
		transform(input.begin(), input.end(), input.begin(), tolower);
	}
	cout << input;
	return 0;
}

