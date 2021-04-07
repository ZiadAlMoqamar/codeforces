#include <bits/stdc++.h>

using namespace std;

int main()
{
	int wiresCount, shotsCount, wireOrder, birdOrder;
	vector <int> wires = {0};

	cin >> wiresCount;
	for (int i = 0; i < wiresCount; i++) {
		int input;
		cin >> input;
		wires.push_back(input);
	}
	cin >> shotsCount;

	for (int i = 0; i < shotsCount; i++) {
		cin >> wireOrder >> birdOrder;
		if (wireOrder != wiresCount) {
			wires[wireOrder - 1] += birdOrder - 1;
			wires[wireOrder + 1] += wires[wireOrder] - birdOrder;
			wires[wireOrder] = 0;
		}
		else {
			wires[wireOrder - 1] += birdOrder - 1;
			wires[wireOrder] = 0;
		}
	}

	for (int i = 1; i <= wiresCount; i++) {
		cout << wires[i]<<endl;
	}
}
