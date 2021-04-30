#include <bits/stdc++.h>;

using namespace std;


int main() {
	vector <int> input;
	vector <int> elements;
	int N;
	int mode;
	int modeCount=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int entry = 0;
		cin >> entry;
		if (find(input.begin(), input.end(), entry) == input.end()) {
			elements.push_back(entry);
		}
		input.push_back(entry);
	}
	sort(input.begin(), input.end());
	sort(elements.begin(), elements.end());
	mode = elements[0];
	for (int i = 0; i < elements.size(); i++) {
		int counter = count(input.begin(), input.end(), elements[i]);
		if (counter >= modeCount) {
			modeCount = counter;
			mode = elements[i];
		}
	}
	cout << mode;
	return 0;
}
