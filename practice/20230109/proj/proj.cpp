#include <iostream>
#include "Header.h"


int login;
long int pass;

int main()
{
    setlocale(LC_ALL, "ru-ru");
    while (true)
    {
        std::cout << "Приветствую!\nДалее:\n1 - Я админ.\n2 - Я кассир.\n";
        std::cin >> login;

        if (login == 1) {
            std::cout << "Приветствую, хозяин! Введите ваш пароль далее:\n";
            std::cin >> pass;

            auth(login, pass);

        }
        else {
            if (login == 2) {
                std::cout << "Приветствую, пользователь! Введите ваш пароль далее:\n";
                std::cin >> pass;

                auth(login, pass);

            }
            else {
                std::cout << "Ошибка!\n";
            }
        }
    }
    return 0;
}