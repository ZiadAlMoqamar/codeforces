#include <iostream>
using namespace std;
int main()
{
	int NoOfCrimesUntreated = 0;
	int Events=0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		Events += x;
		if (Events == -1)
		{
			NoOfCrimesUntreated++;
			Events = 0;
		}
	}
	cout << NoOfCrimesUntreated;
	return 0;
}

