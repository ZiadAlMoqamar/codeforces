#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	string input;
	cin >> input;
	int rotations = 0;
	char pointer = 'a';
	for (int i = 0; i < input.length(); i++)
	{

		int moves= fabs((int)input[i] - (int)pointer);
		if(moves<13)
		{
			rotations += moves;
		}
		else
		{
			rotations += (26 - moves);
		}
		pointer = input[i];
	}
	cout << rotations;
}
