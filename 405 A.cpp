#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector <int> num;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		num.push_back(x);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
	return 0;
}
