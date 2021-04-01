#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long n, k,output,x;

	cin >> n >> k;
	if (n % 2 == 0) {
		if (k <= n / 2) {
			output = 2 * k - 1;
		}
		else {
			 x = n / 2;
			output = (k - x) * 2;
		}
	}
	else {
		if (k <= n / 2 + 1) {
			output = 2 * k - 1;
		}
		else
		{
			 x = n / 2 + 1;
			output = (k-x) * 2;
		}
	}

	cout << output;

}
