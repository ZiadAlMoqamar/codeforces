#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n, sum = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	cin >> n;
	vector <int> vec1 (n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec1[ i ];
		if (vec1[i] == 1)
			n1++;
		else if (vec1[i] == 2)
			n2++;
		else if (vec1[i] == 3)
			n3++;
		else
			n4++;
	}
	sum += n4;
	n4 = 0;
	if (n3 != n1)
	{
		if (n3 > n1)
		{
			sum += n1;
			n3 -= n1;
			sum += n3;
			n1 = 0;
		}
		else
		{
			sum += n3;
			n1 -= n3;
			n3 = 0;
		}
	}
	else
	{
		sum += n3;
		n1 = 0;
		n3 = 0;
	}
	if (n2 % 2 == 0)
	{
		sum += n2 / 2;
		n2 = 0;
	}
	else
	{
		sum += n2 / 2;
		if (n1 == 1)
		{
			sum ++ ;
			n2 = 0;
			n1--;
		}
		else
		{
			sum++;
			n1 -= 2;
			n2 = 0;
		}
	}
	if (n1 <= 0)
	{
		cout << sum;
		return 0;
	}
	else
	{
		if (n1 % 4 == 0)
		{
			sum += n1 / 4;
			n1 = 0;
		}
		else
		{
			sum += n1 / 4;
			sum++;
			n1 = 0;
		}
		cout << sum;
		return 0;
	}
}
