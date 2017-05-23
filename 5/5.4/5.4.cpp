#include <iostream>
using namespace std;

int main() {
	int grand = 0;
	int scelta = 0;
	int serie[32];
	int primo = 0;
	int a = 0;

	cout << "Numeri primi:\n";
	do {
		cout << "Quanto vuoi che sia grande la serie di numeri? ";
		cin >> grand;

		if (grand == 0) {
			cout << "\nLa sequenza deve contenere almeno un numero!\n\n";
		}

		for (int i = 0; i < grand; i++) {
			cout << "Elemento: " << i + 1 << ": ";
			cin >> serie[i];
			if (serie[i] < 0) {
				cout << "\nTutti i numeri della serie devono essere positivi!\n\n";
				return 0;
			}
		}
		cout << "\n";

		for (int i = 0; i < grand; i++) {
			for (int y = i; y > 0; y--) {
				if (i%y == 0) {
					a++;
				}
			}
			if (a >= 2) {
				cout << serie[i] << " non e' primo.\n";
			}
			else if (a < 2) {
				cout << serie[i] << " e' primo.\n";
			}
		}
		cout << "\nVuoi continuare con l'operazione? Se si' digitare 1 in caso contrario digitare 0.\nScelta: ";
		cin >> scelta;
		cout << "\n";
	} while (scelta == 1);

	cout << "\n\n";

	return 0;
}
