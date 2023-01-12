#include <iostream>
#include <stdio.h>
#include <sqlite3.h> 
#include <string>
#include <vector>



int adm() {
    int n = 0;
    int operation;

    std::string name;
    int amount = 0;
    std::string stramount;

    std::string delname;
    int del;

    std::string showname;
    int show;
    int showout = 0;

    std::string nowamountname;
    int newamount = 0;

    int rc;
    sqlite3* db{};

    char *err = 0;
    const char* SQL = R"(CREATE TABLE IF NOT EXISTS positions (
                        id     INTEGER UNIQUE 
                        PRIMARY KEY AUTOINCREMENT,
                        name   TEXT    UNIQUE NOT NULL,
                        amount INTEGER NOT NULL);)";

    const char* sqladdpos = R"(INSERT INTO positions (name, amount) VALUES (name, stramount);)";

    const char* sqldelpos = R"(DELETE FROM positions WHERE name = delname;)";
    const char* sqldelallpos = R"(TRUNCATE TABLE positions;)";

    const char* sqlshowpos = R"(SELECT amount FROM positions WHERE name = showname)";
    const char* sqlshowallpos = R"(SELECT * FROM positions)";

    const char* sqlupdateamount = R"(UPDATE positions SET amount = newamount WHERE name = nowamountname;)";


    rc = sqlite3_open("data.db", &db);
    sqlite3_exec(db, SQL, 0, 0, &err);
    
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return 0;
    }
    else {
        fprintf(stderr, "Opened database successfully\n");
    }


    while (n == 0)
    {

        std::cout << "Вы обладаете следующими операциями:\n1 - Добавить товар." << std::endl;
        std::cout << "2 - Удалить товар.\n3 - Показать информацию о товаре.\n4 - Изменить информацию о товаре." << std::endl;
        std::cout << "5 - Выход из аккаунта." << std::endl;
        std::cin >> operation;

        switch (operation)
        {
        case 1:
            // Добавление записи
            std::cout << "Введите название вашей позиции:" << std::endl;
            std::cin >> name;
            if (name.empty()) {
                std::cout << "Пустое поле имени! Повторите операцию заново." << std::endl;
                continue;
            }

            std::cout << "Введите количество:" << std::endl;
            std::cin >> amount;
            if (amount == 0) {
                std::cout << "Некорректное количество товара! Повторите операцию заново." << std::endl;
                continue;
            }

            stramount = std::to_string(amount);
            sqlite3_exec(db, sqladdpos, 0, 0, &err);
            std::cout << "Успешно!" << std::endl;
            name = "";
            amount = 0;
            continue;

        case 2:
            // Удаление записи
            std::cout << "1 - Удалить позицию.\n2 - Удалить таблицу. (будьте аккуратны)" << std::endl;
            std::cin >> del;
            
            switch (del)
            {
            case 1:
                std::cout << "Введите название товара, который хотите удалить из списка:" << std::endl;
                std::cin >> delname;
                if (delname.empty()) {
                    std::cout << "Пустое поле! Повторите операцию заново." << std::endl;
                    continue;
                }

                sqlite3_exec(db, sqldelpos, 0, 0, &err);
                // Нет проверки на успешность)
                std::cout << "Позиция успешно удалена!" << std::endl;

            case 2:
                sqlite3_exec(db, sqldelallpos, 0, 0, &err);
                // Нет проверки на успешность)
                std::cout << "Таблица полностью очищена." << std::endl;

            default:
                std::cout << "Некорректный код операции! Повторите операцию заново." << std::endl;
                del = 0;
                continue;
            }

            continue;

        case 3:
            // Вывод
            std::cout << "1 - Вывод позиции.\n2 - Вывести таблицу." << std::endl;
            std::cin >> show;

            switch (show)
            {
            case 1:
                std::cout << "Введите название товара, который хотите вывести:" << std::endl;
                std::cin >> showname;
                if (showname.empty()) {
                    std::cout << "Пустое поле! Повторите операцию заново." << std::endl;
                    continue;
                }

                showout = sqlite3_exec(db, sqlshowpos, 0, 0, &err);
                // Нет проверки на успешность)
                std::cout << showname << " - " << showout << std::endl;
                showname = "";
                showout = 0;
                show = 0;
                continue;

            case 2:
                // !!!!!Нужно занести полученные значения в вектор, нерабочая функция!!!!!
                sqlite3_exec(db, sqlshowallpos, 0, 0, &err);
                std::cout << "Функция пока недоступна." << std::endl;

            default:
                std::cout << "Некорректный код операции! Повторите операцию заново." << std::endl;
                show = 0;
                continue;
            }

            continue;

        case 4:
            // Изменение количества
            std::cout << "Введите название позиции, количество которой вы хотите изменить:" << std::endl;
            std::cin >> nowamountname;
            if (nowamountname.empty()) {
                std::cout << "Пустое поле имени! Повторите операцию заново." << std::endl;
                continue;
            }

            std::cout << "Введите новое количество товара:" << std::endl;
            std::cin >> newamount;
            if (newamount == 0) {
                std::cout << "Некорректное количество! Повторите операцию заново." << std::endl;
                continue;
            }

            sqlite3_exec(db, sqlupdateamount, 0, 0, &err);
            // Нет проверки на успешность)
            std::cout << "Успешно!" << std::endl;
            nowamountname = "";
            newamount = 0;

            continue;

        case 5:
            // Выход
            n == 0;
            break;

        default:
            std::cout << "Ошибка, повторите операцию!" << std::endl;
            continue;
        }
        
    }

    sqlite3_close(db);
    return 0;
}

void user() {
    int n = 0;

    while (n == 0)
    {
        std::cout << "" << std::endl;
    }
}

void auth(int login, long int pass) {
    if (login == 1) {
        if (pass == 123123) {
            pass = 0;

            adm();

        }
        else {
            if (login == 2) {
                if (pass == 85208520) {
                    pass = 0;

                    user();

                }
                else {
                    std::cout << "Ошибка!" << std::endl;
                }
            }
        }
    }
}