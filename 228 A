#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector <int> inputs;
	int input;
	for (int i = 0; i < 4; i++)
	{
		cin >> input;
		inputs.push_back(input);
	}
	int output = 0;
	for (int i = 0; i < 3; i++)
	{
		int counter=0;
		counter=count(inputs.begin()+i+1, inputs.end(), inputs[i]);
		if (counter==0)
		{
			continue;
		}
		else if (counter == 3)
		{
			output = counter;
			break;
		}
		else
		{
			if (counter > output)
			{
				output = counter;
			}
			else if (counter==output && output==1)
			{
				output++;
			}
		}
	}
	cout << output;
}

