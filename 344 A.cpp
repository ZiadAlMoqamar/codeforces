#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num;
	vector <int> input;
	cin >> num;
	int diffnum = 0;
	int x;
	cin >> x;
	input.push_back(x);
	for (int i = 1; i < num; i++)
	{
		int x;
		cin >> x;
		if (x != input[i - 1])
			diffnum++;
		input.push_back(x);
	}
	cout << diffnum + 1;
	return 0;
}
