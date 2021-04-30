#include <bits/stdc++.h>;

using namespace std;


int main() {
	string input;
	long long output = 0;
	int inputLength = 0;
	cin >> input;
	inputLength = input.length();
	int j = 0;
	for (int i = inputLength - 1; i != -1; i--) {
		int castedInt = (int)input[i] - 48;
		long long bitValue = pow(2,j);
		output += bitValue * castedInt;
		j++;
	}
	cout << output;
	return 0;
}
