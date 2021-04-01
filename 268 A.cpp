#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int iNumOfTeams = 0;
	cin >> iNumOfTeams;
	vector <int> vHost;
	vector <int> vGuest;
	for (int i = 0; i < iNumOfTeams; i++)
	{
		int h, g;
		cin >> h >> g;
		vHost.push_back(h);
		vGuest.push_back(g);
	}
	int iResult = 0;
	for (int i = 0; i < iNumOfTeams; i++)
	{
		int x;
		x = count(vGuest.begin(), vGuest.end(), vHost[i]);
		iResult += x;
	}
	cout << iResult;
}
