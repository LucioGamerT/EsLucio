#include <iostream>
using namespace std;

int main() {
	int grand = 0;
	int c = 0;
	int serie[32];
	int primo = 0;

	cout << "Numeri primi:\n";
	cout << "Quanto vuoi che sia grande la serie di numeri? ";
	cin >> grand;

	if (grand == 0) {
		cout << "\nLa sequenza deve contenere almeno un numero!\n\n";
	}

	for (int i = 0; i < grand; i++) {
		cout << "Elemento: " << i + 1 << ": ";
		cin >> serie[i];
			if (serie[i] < 0) {
			cout << "\nTutti i numeri della serie devono essere positivi!\n\n";
			}
		}
		for (int i = 0; i = grand; i++) {
			if (serie[i] == 2) {
				cout << serie[i] << "e' un numero primo\n";
		}
	/*	if (serie[i] != 2 && serie[i] % 2 == 0) {

		}*/
	}
	return 0;
}
