#include <iostream>

#include "1.1.1.h"
#include "1.1.2.h"
#include "1.1.3.h"
#include "1.2.1.h"
#include "1.2.2.h"
#include "1.2.3.h"

int main()
{
    using namespace std;
    setlocale(LC_ALL, "ru-ru");

    int n;

    std::cout << "¬ведите номер задани€, от 1 до 6: " << std::endl;
    std::cin >> n;

    if (n == 1) {
        func1();
    } else {
        if (n == 2) {
            func2();
        } else {
            if (n == 3) {
                func3();
            } else {
                if (n == 4) {
                    func4();
                } else {
                    if (n == 5) {
                        func5();
                    } else {
                        if (n == 6) {
                            func6();
                        }
                        else
                        {
                            std::cout << "ERROR!" << std::endl;
                        }
                    }
                }
            }
        }
    }
 
}

