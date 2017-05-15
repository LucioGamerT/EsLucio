#include <iostream>
using namespace std;

int main() {
	int opz;
	double a;
	double b;
	int c;

	do {
		cout << "Scegli tra una delle seguenti operazioni:" << endl;
		cout << "1) Somma tra due numeri;" << endl;
		cout << "2) Differenza tra due numeri;" << endl;
		cout << "3) Moltiplicazione tra due numeri;" << endl;
		cout << "4) Divisione tra due numeri;" << endl;
		cin >> opz;
		cout << "Scegli i due numeri con due fare l'operazione:" << endl;
		cin >> a;
		cin >> b;
		if (opz = 1) {
			cout << "La somma e' uguale a " << a + b << endl;
		}
		if (opz = 2) {
			cout << "la differenza e' uguale a " << a - b << endl;
		}
		if (opz = 3) {
			cout << "La moltiplicazione e' uguale a " << a*b << endl;
		}
		if (opz = 4 & b != 0) {
			double d = a / b;
			double resto = a % b;
			cout << "La divisione e' uguale a " << d << "e il suo resto e' pari a " << resto << endl;
		}
		if (opz = 4 & b = 0) {
			cout << "La divisone è impossibile perchè il divisore è pari a 0." << endl;
		}

		cout << "Vuoi continuare con le operazioni? Se si digita 1 altrimenti digita 2." << endl;
		cin >> c;
	} while (c == 1);

	return 0;
}
