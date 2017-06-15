#include <iostream>
#include <string.h>

int main() {
	char str[256];
	char a;
	int scelta = 0;

	std::cout << "Eliminare un carattere da un stringa:\n";

	do {
		int rim = 0;

		std::cout << "\nInserire una stringa: ";
		std::cin.getline(str, 256, '\n');
		std::cout << "Scegliere il carattere da cancellare dalla stringa: ";
		std::cin >> a;

		for (int k = 0; k < strlen(str); k++) {
			if (str[k] == a) {
				for (int i = k; i < strlen(str); i++) {
					str[i] = str[i + 1];
					if (str[i] == a) {
						k = 0;
					}
				}
				rim++;
			}
		}

		if (rim == 0) {
			std::cout << "\nCarattere non trovato.\nLa stringa rimane la stessa: " << str;
		}
		if (rim == 1) {
			std::cout << "\nE' stato rimosso solo un carattere.";
			std::cout << "\nLa nuova stringa e': " << str << ".";
		}
		if (rim>1) {
			std::cout << "\nSono stati rimossi " << rim << " caratteri.";
			std::cout << "\nLa nuova stringa e': " << str << ".";
		}

		std::cout << "\n\nVuoi ripetere l'operazione? Se si' digita 1 altrimenti digita 0: ";
		std::cin >> scelta;

		if (scelta == 1) {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (scelta == 1);

	std::cout << "\n\n";

	return 0;
}
