#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a = 0;
	double x1 = 0;
	double x2 = 0;
	double y1 = 0;
	double y2 = 0;
	double dist = 0;

	cout << "Distanza tra due punti:\n";
	do {
		cout << "\nInserisci le coordinate dei due punti: \nA = ";
		cin >> x1 >> y1; cout << "B = "; cin >> x2 >> y2; cout << "\n";

		dist = sqrt(pow(x1 + x2, 2) + pow(y1 + y2, 2));

		cout << "La distanza tra i due punti e' uguale a " << dist << " porcodii.\n\n";
		cout << "Vuoi continuare a calcolare la distanza tra due punti? Digita 1 se si' altrimenti digita il cazzo che ti pare.\nScelta: ";
		cin >> a;

	} while (a == 1);


	return 0;
}
