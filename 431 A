#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	vector <int> order;
	int SumOfCalor = 0;
	string input;
	order.push_back(0);
	int x;
	for(int i=0;i<4;i++)
	{
		cin >> x;
		order.push_back(x);
	}
	cin.ignore();
	getline(cin, input);
	for (int i = 0; i < input.length(); i++)
	{
		int k = (int)input[i] -48;
		SumOfCalor += order[k];
	}
	cout << SumOfCalor;
}


