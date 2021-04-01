#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
	string steps;
	string t;
	int step = 0;
	cin >> steps >> t;
	for (int i = 0; i < t.size(); i++) {
		if (steps[step] == t[i]) {
			step++;
		}
		
	}
	cout << step + 1;
}
