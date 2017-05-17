#include <iostream>
using namespace std;

int main() {
	double i;
	int numvar = 0;
	double somma = 0;
	double media = 0;

	cout << "Inserire la serie di numeri di cui si vuole calcolare la media matematica:\n";
	do {
		cout << numvar + 1 << ": ";
		cin >> i;
		if (i != 0) {
			numvar++;
			somma += i;
		}
		else {
			if (numvar == 0) {
				cout << "Devi inserire almeno un numero\n";
			}
		}
	} while (i != 0 || numvar == 0);
	media = somma / numvar;

	cout << "La media numerica della serie inserita e' uguale a " << media << ". " << endl;
	return 0;
}
