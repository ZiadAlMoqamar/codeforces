#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	unsigned int a, b;
	cin >> a >> b;
	for (int i = 1; 1 < 10000; i++)
	{
		a *= 3;
		b *= 2;
		if (a > b)
		{
			cout << i;
			break;
		}
	}
	return 0;
}

