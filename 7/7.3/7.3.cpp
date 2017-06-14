#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[256];
	char a;
	int scelta = 0;

	cout << "Eliminare un carattere da un stringa:\n";

	do {
		int rim = 0;

		cout << "\nInserire una stringa: ";
		cin.getline(str, 256, '\n');
		cout << "Scegliere il carattere da cancellare dalla stringa: ";
		cin >> a;

		for (int k = 0; k < strlen(str); k++) {
			if (str[k] == a) {
				for (int i = k; i < strlen(str); i++) {
					str[i] = str[i + 1];
					if (str[i] == a) {
						k = 0;
					}
				} rim++;
			}
		}

		if (rim == 0) {
			cout << "\nCarattere non trovato.\nLa stringa rimane la stessa: "<<str;
		}
		if (rim == 1) {
			cout << "\nE' stato rimosso solo un carattere.";
			cout << "\nLa nuova stringa e': " << str << ".";
		}
		if (rim>1) {
			cout << "\nSono stati rimossi " << rim << " caratteri.";
			cout << "\nLa nuova stringa e': " << str << ".";
		}

		cout << "\n\nVuoi ripetere l'operazione? Se si' digita 1 altrimenti digita 0: ";
		cin >> scelta;

		if (scelta == 1) {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (scelta == 1);

	cout << "\n\n";

	return 0;
}
