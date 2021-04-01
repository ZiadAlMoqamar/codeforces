#include <iostream>



using namespace std;

int main()
{
	int n, m, limit, nPairs = 0;
	cin >> n >> m;
	limit = n + m;
	for (int i = 0; i <= limit; i++) {
		for (int j = 0; j <= limit; j++) {
			if (i * i + j == n & i + j * j == m) {
				nPairs++;
			}
		}
	}
	cout << nPairs;
}
