// Гл.3 №5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	long long world;

	cout << "Enter the world's population: ";
	cin >> world;

	long long US;
	cout << "Enter the population of the US: ";
	cin >> US;

	long double procent = (long double) (100 * US) / world;

	cout << "The population of the US is " << procent << " %of the world population."<< endl;

	system("pause");
	return 0;
}
