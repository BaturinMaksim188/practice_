#include <iostream>
#include <cmath>

int func5()
{
    const float x = 3.5;
    const float b = 0.4;
    int e;
    double a;
    double c;
    double y;

    std::cout << "¬ведите e: " << std::endl;
    std::cin >> e;
    
    a = log(x);

    c = pow(a, 2) + sqrt(b * x);

    y = pow(e, (2 * x)) + pow(9.7, c);


    std::cout << "a = " << a << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}

