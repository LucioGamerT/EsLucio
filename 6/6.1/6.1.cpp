#include <iostream>
using namespace std;

int main() {
	int fibonacci[1024];
	int grandsq = 0;

	cout << "Grandezza sequenza di Fibonacci: ";
	cin >> grandsq;
	if (grandsq == 0) {
		cout << "La sequenza deve contenere almeno un numero!\n";
	}

	fibonacci[0] = 1;
	fibonacci[1] = 1;

	for (int i = 2; i < grandsq; i++) {
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
	}
	cout << "\nLa sequenza di Fibonacci e': \n";
	for (int k = 0; k < grandsq; k++) {
		cout << fibonacci[k] << " ";
	}
	cout << "\n\n";
	return 0;
}
