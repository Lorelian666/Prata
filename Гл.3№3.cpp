// Гл.3№3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;
	const int Secinmin = 60; 
	const int Minindegree = 60;

	cout << "Enter a latitude in degrees, minutes and seconds: " << endl;
	int degree, minute, second;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arcs: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arcs: ";
	cin >> second;

	double degree_final = (double(second) / Secinmin + double(minute)) / Minindegree + degree;
	cout << degree << " degrees, " << minute << " minutes, ";
	cout << second << " seconds = " << degree_final << " degrees." << endl;
	return 0;
}