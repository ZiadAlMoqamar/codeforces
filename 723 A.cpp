#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int x1, x2, x3, output;
	vector <int> list;
	cin >> x1 >> x2 >> x3;
	
		list.push_back(x1);
		list.push_back(x2);
		list.push_back(x3);
		sort(list.begin(), list.end());
		output = list[2] - list[0];
	cout << output;

}
