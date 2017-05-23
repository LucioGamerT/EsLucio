#include <iostream>
using namespace std;

int main() {
	int a, b, r, mcd; // non è necessario inizializzare le variabili perchè tanto le imposti dopo
	char c;

	cout << "MCD di due numeri:\n";
	do {
		c = 0;
		cout << "Inserisci la coppia di numeri di cui vuoi sapere l'MCD: ";
		cin >> a >> b;

		if (b == 0) {
			mcd = a;
		}
		else {
			if (a < b) {
				int tmp = a;
				a = b;
				b = a;
			}
			r = a % b;
			if (r == 0) {
				mcd = b;
			}
			else {
				while (r != 0) { // cosa era "&" ???
					// TODO
					r = a % b;
				}
			}
		}

		cout << "MCD: " << mcd << "\n\n";
		cout << "Vuoi ripetere l'operazione? Se si digita 1, in caso contrario digita 0.\nScelta: ";
		cin >> c; cout << "\n";
	} while (c == '1');

	return 0;
}
