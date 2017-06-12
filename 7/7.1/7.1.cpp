#include <iostream>
using namespace std;

int main() {
	cout << "Sostituire un carattere con un altro:\n";
	char str[256];
	char sost1;
	char sost2;
	int sost = 0;
	int scelta = 0;

	do {
		cout << "Inserire una stringa: ";
		cin >> str;
		cout << "\n";
		cout << "Inserire ora il carattere che si vuole sostituire e il sostituto:\nA: ";
		cin >> sost1;
		cout << "B: ";
		cin >> sost2;


		for (int k = 0; k < strlen(str); k++) {
			if (str[k] == sost1) {
				str[k] = sost2;
				sost++;
			}
		}

		cout << "\nQuesta e' la nuova stringa: " << str;

		if (sost == 1) {
			cout << "\nIl carattere scelto e'stato sostituito " << sost << " volta.\n";
		}
		else {
			cout << "\nIl carattere scelto e'stato sostituito " << sost << " volte.\n";
		}
		cout << "\nVuoi ripetere l'operazione? Se si' digita 1 altrimenti digita 0: ";
		cin >> scelta;
		cout << "\n";
		sost = 0;
	} while (scelta == 1);
		

	cout << "\n\n";

	return 0;
}

