#include <bits/stdc++.h>;

using namespace std;


int main() {
	vector <int> input;
	vector <int> output;
	int N;
	int k;
	int greaterNum = -1001;
	cin >> N>> k;
	for (int i = 0; i < N; i++) {
		int entry = 0;
		cin >> entry;
		input.push_back(entry);
	}
	sort(input.begin(), input.end());
	for (int i = 0; i < N; i++) {
		int smallerNum = input[i];
		int neededNum = k - smallerNum;
		if (binary_search(input.begin(), input.end(), neededNum)) {
			greaterNum = neededNum;
			output.push_back(smallerNum);
			output.push_back(greaterNum);
		}
		if (greaterNum != -1001) {
			break;
		}
	}
	if (output.size() != 0) {
		cout << "Yes"<<endl;
		cout << output[0] << ' ' << output[1];
	}
	else {
		cout << "No";
	}
	return 0;
}
