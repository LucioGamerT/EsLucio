#include <iostream>
using namespace std;

void memo_sequenza(int a, int b[]) {
	for (int i = 0; i < a; i++) {
		cout << "Cifra num. " << i + 1 << "': ";
		cin >> b[i];
	}
}
void riordina(int a, int b[]) {
	int tmp;
	for (int i = 0; i < a; i++) {
		for (int k = i; k < a; k++) {
			if (b[i] > b[k]) {
				tmp = b[i];
				b[i] = b[k];
				b[k] = tmp;
			}
		}
	}

}
void stamp_sqz(int a, int b[]) {
	for (int i = 0; i < a; i++) {
		cout << b[i];
		cout << ((i < a - 1) ? ", " : ".");
	}
	cout << "\n";
}

int main() {

	cout << "Ordinamento di una sequenza di numeri:\n";
	int scelta = 0;
	do {
		int grand_sqz;

		cout << "Numero di cifre componeti la sequenza numerica: ";
		cin >> grand_sqz;
		int *sequenza = new int[grand_sqz];
		cout << "\nDigitare ora le cifre della sequenza numerica:\n";
		memo_sequenza(grand_sqz, sequenza);
		riordina(grand_sqz, sequenza);

		cout << "Sequenza di cifre ordinata: ";
		stamp_sqz(grand_sqz, sequenza);

		cout << "\nSi desidera ripetere l'operazione di ordinamento numerico? Se si' digitare 1 altrimenti digitare 0: ";
		cin >> scelta;
		cout << "\n";
	} while (scelta == 1);
	cout << "\n";
	return 0;
}
