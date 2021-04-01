#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	unsigned int n, problemsubmitted = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int flag = 0;
		for (int j = 0; j < 3; j++)
		{
			int x;
			cin >> x;
			if (x == 1)
			{
				flag++;
			}
		}
		if (flag >= 2)
			problemsubmitted++;
	}
	cout << problemsubmitted;
	return 0;
}
