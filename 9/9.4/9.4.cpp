#include <iostream>
#include <string.h>
using namespace std;

bool occorre(char a[], char b[]) {
	int c, d;
	bool TrueFalse;
	for (int i = 0; i < strlen(b); i++) {
		c = 0;
		d = 1;
		for (int k = 0; k < strlen(b)+2; k++) {
			if (b[i] == a[k]) {
				c++;
				i++;
			}
			if (c == d) {
				d++;
			}
			if (c == strlen(b)) {
				return TrueFalse = true;
			}
		}
	}
	return TrueFalse = false;
}

int main() {

	char str1[256];
	char str2[256];
	int scelta1 = 0;
	int scelta2 = 0;

	cout << "Occorrenza di una stringa in un'altra:\n";
	cout << "Digitare la stringa principale: ";
	cin.getline(str1, 256, '\n');
	cout << "Digitare ora la seconda stringa: ";
	cin.getline(str2, 256, '\n');

	bool check = occorre(str1, str2);
	if (check == true) {
		cout << "La seconda stringa occorre nella stringa principale.\n\n";
	}
	else {
		cout << "La seconda stringa non occorre nella stringa principale.\n\n";
	}
	return 0;
}
