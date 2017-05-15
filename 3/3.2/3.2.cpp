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
		//if (a < x < c & d < y < b) { -> non puoi fare questa cosa ma devi definire tutti i casi
		if (a < x && x < c && d < y && y < b) {
			cout << "Il punto inserito si trova all'interno del rettangolo." << endl;
		}
		//else if (x < a || x > c & y < d || y > b) { -> ti sei dimenticato di mettere if e continui a sbagliare operatore (non & ma &&)
		else { // cmq non serviva mettere altri casi
			/* dovresti aggiungere un check dei punti in alto a sinistra ed in basso a destra
			   (cioè a > c o b > d)*/
			cout << "Il punto inserito si trova all'esterno del rettangolo." << endl;
		}
		cout << "Vuoi ripetere l'operazione? Se si' digitare 1, in caso contrario digitare 2." << endl;
		cin >> risposta;
	} while (risposta == 1);

	return 0;
} 
