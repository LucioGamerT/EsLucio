#include <iostream>
using namespace std;

int main() {
	char str[256];
	char a;
	int scelta = 0;

	cout << "Eliminare un carattere da un stringa:\n";

	do {
		cout << "\nInserire una stringa:\n";
		cin >> str;
		cout << "\nScegliere il carattere da cancellare dalla stringa: ";
		cin >> a;

		for (int k = 0; k < strlen(str); k++) {
			if (str[k] == a) {
				str[k] = ' ';
			}
		}
		cout << "\nLa nuova stringa e': " << str << ".";

		cout << "\n\nVuoi ripetere l'operazione? Se si' digita 1 altrimenti digita 0: ";
		cin >> scelta;
	} while (scelta == 1);

	cout << "\n\n";

	return 0;
}
