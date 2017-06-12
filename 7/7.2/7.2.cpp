#include <iostream>
#include <string.h> // è questa la libreria con uso strlen e non <string>
using namespace std;

int main() {
	char str[256];
	int a, e, i, o, u, scelta; // più inuforme, inizializzo dopo
	// rimosse variabili non utilizzate

	cout << "Quante vocali ci sono nella tua stringa?";

	do {
		// Inizializzo a inizio ciclo
		a = 0;
		e = 0;
		i = 0;
		o = 0;
		u = 0;

		cout << "\nInserire un stringa: ";
		cin.getline(str, 256, '\n');

		for (int k = 0; k < strlen(str); k++) {
			if (str[k] == 'a') {
				a++;
			}
			if (str[k] == 'e') {
				e++;
			}
			if (str[k] == 'i') {
				i++;
			}
			if (str[k] == 'o') {
				o++;
			}
			if (str[k] == 'u') {
				u++;
			}
		}

		int vocali = a + e + i + o + u; // immagazzino il totale in questa variabile perchè -> (vai all'if successivo)
		cout << "\n{ " << a << ", " << e << ", " << i << ", " << o << ", " << u << " } = " << vocali;
		if (vocali == 1) { // qui il programma rifarebbe stupidamente il calcolo
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