#include <iostream>

int main() {

	setlocale(0, "rus");
	using namespace std;
	const int F = 12;   
	
	cout << "Введите свой рост:___\b\b\b";
	unsigned short duim;
	cin >> duim;

	int fut_R, duim_R;
	fut_R = duim / F;
	duim_R = duim % F;

	cout << "Ваш рост: " << fut_R << " футов и "
		<< duim_R << " дюймов." << endl;

	return 0;
}