#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string name;
	vector <char> distinct;
	getline(cin, name);
	distinct.push_back(name[0]);
	for (int i = 1; i < name.length(); i++)
	{
		if (count(distinct.begin(), distinct.end(), name[i]))
		{
			continue;
		}
		else
		{
			distinct.push_back(name[i]);
		}
	}
	if (distinct.size() % 2==0)
	{
		cout << "CHAT WITH HER!";
	}
	else
	{
		cout << "IGNORE HIM!";
	}
	return 0;
}
