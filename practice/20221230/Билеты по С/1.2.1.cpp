#include <iostream>
#include <cmath>

int func4()
{
    double Z;
    long double Zk;
    long double Zm;
    long double Zg;
    long double Zt;

    std::cout << "Введите Z: " << std::endl;
    std::cin >> Z;

    std::cout << "Z в битах: " << Z * 8 << std::endl;

    Zk = Z / 1024;
    Zm = Zk / 1024;
    Zg = Zm / 1024;
    Zt = Zg / 1024;

    std::cout << "Z в килобайтах: " << Zk << std::endl;
    std::cout << "Z в мегабайтах: " << Zm << std::endl;
    std::cout << "Z в гигабайтах: " << Zg << std::endl;
    std::cout << "Z в терабайтах: " << Zt << std::endl;

    return 0;
}

