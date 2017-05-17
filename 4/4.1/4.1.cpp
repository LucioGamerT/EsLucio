#include <iostream>
using namespace std;

int main() {
	int b;
	do {
		int a;
		int fattoriale = 1;
		cout << "Inserire il numero intero positivo di cui si vuole calcolare il fattoriale: ";
		cin >> a;

		if (a < 0) {
			cout << "Il numero inserito e' negativo per cui non e' possibile calcolarne il fattoriale." << endl;
			return 0;
		}
		for (int i = a; i > 0; i--) {
			fattoriale *= i;
		}
		cout << "\nIl fattoriale e' uguale a " << fattoriale << ". " << endl;

		cout << "\nVuoi continuare a calcolare fattoriali? Se si' digita 1 altrimenti digita 2: ";
		cin >> b;
	} while (b == 1);
}
