#include <iostream>
using namespace std;

int main() {
	int seq[100];
	int grandsq = 0;
	int max = 0;
	int min = 0;

	cout << "Massimo e minimo di una sequenza\n\n";
	do {
		cout << "Grandezza sequenza: ";
		cin >> grandsq;
		if (grandsq == 0) {
			cout << "La sequenza deve contenere almeno un numero!\n\n";
		}
	} while (grandsq == 0);

	for (int i = 0; i < grandsq; i++) {
		cout << "Elemento " << i + 1 << ": ";
		cin >> seq[i];

	}
	for (int i = 0; i < grandsq; i++) {
		if (min == 0) {
			min = seq[i];
		}
		if (seq[i] < min) {
			min = seq[i];
		}
		if (max == 0) {
			max = seq[i];
		}
		if (seq[i] > max) {
			max = seq[i];
		}
	}
	cout << "\nIl valore massimo e': " << max;
	cout << "\nIl valore minimo e': " << min << "\n\n";


	return 0;
}
