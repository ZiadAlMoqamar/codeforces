#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, b, d, waste = 0;
	int output = 0;
	cin >> n >> b >> d;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (input <= b) {
			if (waste + input <= d) {
				waste += input;
			}
			else {
				waste = 0;
				output++;
				
			}
		}
	}
	cout << output;

}
