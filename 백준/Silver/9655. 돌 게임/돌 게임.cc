#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	std::cout << ( (N & 1) ? "SK" : "CY" );

	return 0;
}