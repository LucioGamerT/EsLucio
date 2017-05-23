#include <iostream>
using namespace std;

int main() {
	int a, b, r, mcd; // non è necessario inizializzare le variabili perchè tanto le imposti dopo
	int tempr = 0;
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
				b = tmp;
			}
			r = a % b;
			if (r == 0) {
				mcd = b;
			}
			else {
				while (r != 0) {
					a = b;   // invertivo nel modo sbagliato cosi mi ritrovavo qua --->
					b = r;
					r = a % b; // <---- con r = b % r    e con troppi r non ci capivo un cazzo allora ho invertito e gg viene
					mcd = b;
				}
			}
		}

		cout << "MCD: " << mcd << "\n\n";
		cout << "Vuoi ripetere l'operazione? Se si digita 1, in caso contrario digita 0.\nScelta: ";
		cin >> c; cout << "\n";
	} while (c == '1');

	return 0;
}
