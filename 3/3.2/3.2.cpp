#include <iostream>
using namespace std;

int main() {
	int x, y;
	int a, b, c, d;
	int risposta;
	do {
		cout << "Inserire le coordinate a e b del primo vertice in alto a sinistra del rettangolo:" << endl;
		cin >> a >> b;
		cout << "Inserire le coordinate c e d del secondo vertice in basso a destra: " << endl;
		cin >> c >> d;
		cout << "Inserire le coordinate del punto di cui si vuole sapere se la sua posizione e' all'interno o all'esterno del rettangolo:" << endl;
		cin >> x >> y;
		if (a < x < c & d < y < b) {
			cout << "Il punto inserito si trova all'interno del rettangolo." << endl;
		}
		else {
			cout << "Il punto non si trova all'interno del rettangolo." << endl;
		}
		cout << "Vuoi ripetere l'operazione? Se sì digitare 1, in caso contrario digitare 2." << endl;
		cin >> risposta;
	} while (risposta == 1);

		return 0;
} 
