#include <iostream>
#include <cmath>
#include <complex>

#include "Source.h"
#include "complex.h"
#include "tgm.h"


int sum(int a, int b);
int min(int a, int b);
int umn(int a, int b);
int del(int a, int b);

std::complex<double> complex(std::complex<double> z1, std::complex<double> z2);

int cyclefor(int i);


int main()
{
    setlocale(LC_ALL, "ru-ru");

    int a;
    int b;
    double double_b;

    std::cout << "Введите число a: ";
    std::cin >> a;
    std::cout << "Введите число b: ";
    std::cin >> b;
    
    std::cout << "Введите число b с двумя и больше знаками после точки: ";
    std::cin >> double_b;


    std::cout << "a + b: " << sum(a, b) << '\n';
    std::cout << "a - b: " << min(a, b) << '\n';
    std::cout << "a * b: " << umn(a, b) << '\n';
    std::cout << "a // b: " << del(a, b) << '\n';
    std::cout << "a / b: " << deld(a, double_b) << '\n';

    std::cout << "log(a+b): " << logN(a, b) << '\n';
    std::cout << "sqrt(a+b): " << sqrtN(a, b) << '\n';
    std::cout << "sin(a+b)^3: " << powSinN(a, b) << '\n';

    std::cout << "complex multiply: " << complex(a, b) << '\n';

    std::cout << cyclefor(0) << '\n';
}