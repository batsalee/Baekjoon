#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	for (int i = N; i > 0; i--) {
		for (int j = 0; j < N - i; j++) { std::cout << ' '; }
		for (int k = N; k > N - i; k--) { std::cout << '*'; }
		std::cout << '\n';
	}

	return 0;
}