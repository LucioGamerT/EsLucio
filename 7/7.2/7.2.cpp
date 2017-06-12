
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[256];
	char vocali[5]{ 'a','e','i','o','u' };
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int tot[5]{ a,b,c,d,e };
	int scelta = 0;

	cout << "Quante vocali ci sono nella tua stringa?\n";

	do {
		cout << "Inserire un stringa: ";
		getline(cin, str);

		for (int k = 0; k < strlen(str); k++) {
			if (str[k] == 'a') {
				a++;
			}
			if (str[k] == 'e') {
				b++;
			}
			if (str[k] == 'i') {
				c++;
			}
			if (str[k] == 'o') {
				d++;
			}
			if (str[k] == 'u') {
				e++;
			}
		}
		cout << "\n{ " << a << ", " << b << ", " << c << ", " << d << ", " << e << " } = " << a + b + c + d + e;
		if (a + b + c + d + e == 1) {
			cout << " vocale.\n";
		}
		else {
			cout << " vocali.\n";
		}

		cout << "\nVuoi ripetere l'operazione? Se si' digita 1 altrimenti digita 0: ";
		cin >> scelta;
		cout << "\n";
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;
	} while (scelta == 1);

	return 0;
}