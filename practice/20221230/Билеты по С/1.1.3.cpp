#include <iostream>
#include <cmath>

int func3()
{
    double L;
    int e;
    int x;
    int a;
    int c;

    std::cout << "������� e: " << std::endl;
    std::cin >> e;
    std::cout << "������� x: " << std::endl;
    std::cin >> x;
    std::cout << "������� a: " << std::endl;
    std::cin >> a;
    std::cout << "������� c: " << std::endl;
    std::cin >> c;

    L = (sqrt((pow(e, x) - pow(cos((pow(x, 2) * pow(a, 5))), 4))) + (pow(atan(a - pow(x, 5)), 4))) / pow(abs((a + pow(x * c, 4))), 1 / e);

    std::cout << L;

    return 0;
}

