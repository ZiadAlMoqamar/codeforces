#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	unsigned int number, fence, height, flagless = 0, flagmore = 0, roadwidth;
	cin >> number >> fence;
	for (int i = 0; i < number; i++)
	{
		cin >> height;
		if (height <= fence)
		{
			flagless++;
		}
		else
		{
			flagmore++;
		}
	}
	roadwidth = flagless + (2 * flagmore);
	cout << roadwidth;
	return 0;
}

