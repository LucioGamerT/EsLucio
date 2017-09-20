#include <iostream>
#include <string.h>
using namespace std;

int vocali_conto(char s[], int v[]) {

	for (int k = 0; k < strlen(s) + 1; k++) {
		if (s[k] == 'a') {
			v[0]++;
		}
		if (s[k] == 'e') {
			v[1]++;
		}
		if (s[k] == 'i') {
			v[2]++;
		}
		if (s[k] == 'o') {
			v[3]++;
		}
		if (s[k] == 'u') {
			v[4]++;
		}
	}

	return v[0] + v[1] + v[2] + v[3] + v[4];
}

int main() {
	char str[256];
	int scelta = 0;

	cout << "Quante vocali ci sono nella tua stringa?";

	do {

		cout << "\nInserire un stringa: ";
		cin.getline(str, 256, '\n');

		int voc[5] = { 0, 0, 0, 0, 0 };

		int vocali = vocali_conto(str, voc);

		cout << "\n{ " << voc[0] << ", " << voc[1] << ", " << voc[2] << ", " << voc[3] << ", " << voc[4] << " } = " << vocali;
		if (vocali == 1) {
			cout << " vocale.";
		}
		else {
			cout << " vocali.";
		}

		cout << "\n\nVuoi ripetere l'operazione? Se si' digita 1 altrimenti digita 0: ";
		cin >> scelta;
		if (scelta == 1) {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // pulizia buffer std::cin
		}
	} while (scelta == 1);
	
	cout << '\n';

	return 0;
}