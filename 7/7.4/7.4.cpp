#include <iostream>
#include <string.h>
using namespace std;

int anagramma(char a[], char b[]) {
	int c = 0;								// vanno bene messi qua questi o ci sta un altro posto più carino????
	int k = 0;
	if (strlen(a) != strlen(b)) {
		cout << "\nLe due stringe non hanno la stessa lunghezza quindi non possono essere anagrammi.\n\n";
		return 0;
	}
	else {
		do
		{
			for (int i = 0; i < strlen(a); i++) {
				if (a[k] == b[i]) {
					c++;
					break;
				}
			}
			k++;
		} while (k < strlen(a));
	}
	return c;
}

int main() {
	char str1[256];
	char str2[256];
	int scelta;

	cout << "Controllo anagrammi:\n";

	do {

		cout << "Inserire due stringe in minuscolo e di lunghezza uguali:\nStringa 1: ";
		cin >> str1;
		cout << "Stringa 2: ";
		cin >> str2;

		int check = anagramma(str1, str2);

		if (check == strlen(str1)) {
			cout << "\nLe due stringhe sono anagrammi.\n";
		}
		else {
			cout << "\nLe due stringhe non sono anagrammi.\n";
		}
		cout << "\nVuoi ripetere l'operazione? Se si' digita 1 altrimenti digita 0: ";
		cin >> scelta;
		cout << '\n';

		if (scelta == 1) {
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

	} while (scelta == 1);

	return 0;
}
