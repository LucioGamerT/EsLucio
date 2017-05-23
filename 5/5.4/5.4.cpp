#include <iostream>
using namespace std;

int main() {
	int grand = 0;
	int scelta = 0;
	int serie[32];
	int primo = 0;
	int divisori = 0;

	cout << "Numeri primi:\n";
	do {
		cout << "Quanto vuoi che sia grande la serie di numeri? ";
		cin >> grand;

		if (grand <= 0) {
			cout << "La sequenza deve contenere almeno un numero! Riprova\n\n";
			scelta = 1;
		}
		else {
			for (int i = 0; i < grand; i++) {
				cout << "Elemento " << i + 1 << ": ";
				cin >> serie[i];
				if (serie[i] < 0) {
					cout << "Tutti i numeri della serie devono essere positivi! Riprova\n\n";
					i--;
				}
			}
			cout << "\n";

			for (int i = 0; i < grand; i++) {
				divisori = 0;

				for (int y = serie[i]; y > 0; y--) {
					if (serie[i] % y == 0) {
						divisori++;
					}
				}

				if (divisori > 2 || divisori == 1) {
					cout << serie[i] << " non e' primo.\n";
				}
				else if (divisori == 2) {
					cout << serie[i] << " e' primo.\n";
				}
			}

			cout << "\nVuoi continuare con l'operazione? Se si' digitare 1 in caso contrario digitare 0.\nScelta: ";
			cin >> scelta;
			cout << "\n";
		}
	} while (scelta == 1);

	cout << "\n\n";

	return 0;
}
