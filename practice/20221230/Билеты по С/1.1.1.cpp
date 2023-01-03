#include <iostream>

int func1()
{
    double R;
    int t;
    int l;

    std::cout << "Введите t: " << std::endl;
    std::cin >> t;
    std::cout << "Введите l: " << std::endl;
    std::cin >> l;

    R = (3 * pow(t, 2)) + (3 * pow(l, 5)) + 4.9;
    std::cout << R;
    return 0;
}

