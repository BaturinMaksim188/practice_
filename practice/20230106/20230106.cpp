#include <iostream>
#include <cmath>
#include <ctime>
#include <set>

int sum(int a, int b) {
	return a + b;
}
int min(int a, int b) {
	return a - b;
}
int umn(int a, int b) {
	return a * b;
}
int del(int a, int b) {
	return a / b;
}
double deld(int a, double double_b) {
	return a / double_b;
}

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
		
	

	srand(time(NULL));


	std::multiset <int> mtswn;
	mtswn.insert(sum(a, b));
	mtswn.insert(min(a, b));
	mtswn.insert(umn(a, b));
	mtswn.insert(del(a, b));
	mtswn.insert(deld(a, double_b));

	std::multiset <int> ::iterator I1 = mtswn.begin();

	std::cout << "Отсортированный вариант вычислений: " << std::endl;
	for (int i = 1; I1 != mtswn.end(); i++, I1++) {
		std::cout << *I1 << " ";
	}
	std::cout << "\n";




	std::multiset <int> mts;

	std::cout << "Объявление случайных значений: " << std::endl;
	for (int i = 0; i < 10; i++) {
		int random = rand() % 10 + 1;
		mts.insert(random);
		std::cout << random << " ";
	}	
	std::cout << "\n";
	



	std::multiset <int> ::iterator I2 = mts.begin();

	std::cout << "Отсортированный вариант: " << std::endl;
	for (int i = 1; I2 != mts.end(); i++, I2++) {
		std::cout << *I2 << " ";
	}
	std::cout << "\n";
	

	system("pause");

    return 0;
}