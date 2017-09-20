#include <iostream>
#include <string.h>

int sost(char s[], char a) {
	int b = 0;
	for (int k = 0; k < strlen(s); k++) {
		if (s[k] == a) {
			for (int i = k; i < strlen(s); i++) {
				s[i] = s[i + 1];
				if (s[i] == a) {
					k = 0;
				}
			}
			b++;
		}
	}
	if (s[0] == a) {										// sicuramente si puo' scrivere in modo più carino ma è il modo più semplice e veloce venuto in mente
		for (int i = 0; i < strlen(s); i++) {
			s[i] = s[i + 1];
		}
		b++;
	}
	return b;
}

int main() {
	char str[256];
	char a;
	int scelta = 0;

	std::cout << "Eliminare un carattere da un stringa:";

	do {

		std::cout << "\nInserire una stringa: ";
		std::cin.getline(str, 256, '\n');
		std::cout << "Scegliere il carattere da cancellare dalla stringa: ";
		std::cin >> a;

		int rim = sost(str, a);

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

	std::cout << "\n";

	return 0;
}
