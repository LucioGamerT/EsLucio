#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str1[256];
	char str2[256];

	int anagramma = 0;
	int check = 0;
	int k = 1;


	cout << "Controllo anagrammi:\n";

	cout << "Inserire due stringe in minuscolo e di lunghezza uguali:\nStringa 1: ";
	cin >> str1;
	cout << "Stringa 2: ";
	cin >> str2;

	anagramma = strlen(str1);
	if (strlen(str1) != strlen(str2)) {
		cout << "\nLe due stringe non hanno la stessa lunghezza quindi non possono essere anagrammi.\n\n";
		return 0;
	}
	else {
		do {
			for (int i = 1; i <anagramma + 1; i++) {
				if (str1[i] == str2[k]) {                             //    P O R C O D I O 
					check++;										  //    P O R C O D I O 
				}
			}
			k++;
		} while (k - 1 < anagramma);
	}

	if (check == anagramma) {
		cout << "\nLe due stringhe sono anagrammi.\n";
	}
	else {
		cout << "\nLe due stringhe non sono anagrammi.\n";
	}
	cout << k << "\n";
	cout << check << "\n";
	cout << anagramma << "\n";
	cout << "\n\n";

	return 0;
}
