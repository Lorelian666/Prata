// Гл.3 №4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int sec_in_day = (3600 * 24);
const int sec_in_hour = 3600;
const int sec_in_min = 60;

int main()
{
	long long second;

	cout << "enter the number of seconds: ";
	cin >> second;

	long long sec = second;

	int day = (int)(second / sec_in_day);
	second -= (day*sec_in_day);
	int hour = (int)(second / sec_in_hour);
	second -= (hour*sec_in_hour);
	int min = (int)(second / sec_in_min);
	second -= (min*sec_in_min);

	cout << sec << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << second << " seconds" << endl;


	return 0;
}