#include <iostream>
using namespace std;

void fibolucio(int grandsq, int fibonacci[]) {
	for (int i = 2; i < grandsq; i++) {
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
	}
}

int main() {
	int fibonacci[1024];
	int grandsq = 0;
	int scelta = 0;

	cout << "Serie di Fibonacci:\n";

	do {
		cout << "Grandezza sequenza: ";
		cin >> grandsq;
		if (grandsq == 0) {
			cout << "La sequenza deve contenere almeno un numero!\n";
		}

		fibonacci[0] = 1;
		fibonacci[1] = 1;

		fibolucio(grandsq, fibonacci);

		cout << "\nLa sequenza di Fibonacci e': \n";
		for (int k = 0; k < grandsq; k++) {
			cout << fibonacci[k] << " ";
		}
		cout << "\n\nVuoi ripetere l'operazione? Se si' digita 1, in caso contrario digita 0.\nScelta: ";
		cin >> scelta;
	} while (scelta == 1);

	cout << "\n\n";
	return 0;
}
