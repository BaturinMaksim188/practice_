#include <iostream>
#include <cmath>

int func2()
{
    double G;
    int y;
    int e;
    int f;

    std::cout << "¬ведите y: " << std::endl;
    std::cin >> y;
    std::cout << "¬ведите e: " << std::endl;
    std::cin >> e;
    std::cout << "¬ведите f: " << std::endl;
    std::cin >> f;

    G = ((pow(e, (2 * y)) + sin(f)) / log10((3.8 * y) + f));

    std::cout << G;

    return 0;
}

