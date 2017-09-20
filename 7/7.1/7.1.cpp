#include <iostream>
using namespace std;

int sostituisci(char s[], char a, char b) {

	int check = 0;
	for (int k = 0; k < strlen(s) +1; k++) {
		if (s[k] == a) {
			s[k] = b;
			check++;
		}
	}
	return check;
}

int main() {
	cout << "Sostituire un carattere con un altro:\n";
	char s[256];
	char a;
	char b;
	int scelta = 0;

	do {
		cout << "Inserire una stringa (max 256 caratteri): ";
		cin >> s;
		cout << "\n";
		cout << "Inserire ora il carattere che si vuole sostituire e il sostituto:\nA: ";
		cin >> a;
		cout << "B: ";
		cin >> b;

		int sost = sostituisci(s, a, b);

		cout << "\nQuesta e' la nuova stringa: " << s;

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

	return 0;
}

