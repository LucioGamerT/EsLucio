#include <iostream>
using namespace std;

int main() {
	double i;
	int numvar = 0;
	double somma = 0;
	double media = 0;

	cout << "Inserire la serie di numeri di cui si vuole calcolare la media matematica: ";
	do {
		cin >> i;
		if (i != 0) {
			numvar++;
			somma += i;
		}
	} while (i != 0);
	media = somma / numvar;

	cout << "La media numerica della serie inserita e' uguale a " << media << ". " << endl;
	return 0;
}
