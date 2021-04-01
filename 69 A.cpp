#include <iostream>
#include <vector>


using namespace std;

int main()
{
	int n,x;
	string output;
	vector <int> inputs = {0,0,0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> x;
			inputs[j] =inputs[j]+ x;
		}
		
	}
	if (inputs[0] == 0 & inputs[1] == 0 & inputs[2] == 0) {
		output = "YES";
	}
	else {
		output = "NO";
	}
	cout << output;
}
