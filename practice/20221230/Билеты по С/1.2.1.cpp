#include <iostream>
#include <cmath>

int func4()
{
    double Z;
    long double Zk;
    long double Zm;
    long double Zg;
    long double Zt;

    std::cout << "������� Z: " << std::endl;
    std::cin >> Z;

    std::cout << "Z � �����: " << Z * 8 << std::endl;

    Zk = Z / 1024;
    Zm = Zk / 1024;
    Zg = Zm / 1024;
    Zt = Zg / 1024;

    std::cout << "Z � ����������: " << Zk << std::endl;
    std::cout << "Z � ����������: " << Zm << std::endl;
    std::cout << "Z � ����������: " << Zg << std::endl;
    std::cout << "Z � ����������: " << Zt << std::endl;

    return 0;
}

