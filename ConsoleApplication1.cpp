#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	using namespace std;

	const int Const= 12;   

	cout << "Введите свой рост:___\b\b\b";
	unsigned short duim;
	cin >> duim;

	int fut_R, duim_R;
	fut_R = duim / Const;
	duim_R = duim % Const;

	cout << "Ваш рост: " << fut_R << " футов и "
		<< duim_R << " дюймов." << endl;


	cin.get();
	cin.get();

	return 0;
}
