#include <iostream>
#include <numeric>



int main()
{
	int y, w,greatest,gcd;
	int chances = 0;
	int num, den = 1;
	std:: cin >> y >> w;
	if (y > w) {
		greatest = y;
	}
	else {
		greatest = w;
	}
	chances = (6 - greatest) + 1;
	gcd = std::gcd(chances, 6);
	num = chances / gcd;
	if (num != 0) {
		den = 6 / gcd;
	}
	std::cout << num << '/' << den;
}
