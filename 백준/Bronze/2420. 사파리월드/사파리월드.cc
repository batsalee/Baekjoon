#include <iostream>

int main()
{
    long long DoF1, DoF2; // Degree of Famous
    std::cin >> DoF1 >> DoF2;

    std::cout << llabs(DoF1 - DoF2);

    return 0;
}