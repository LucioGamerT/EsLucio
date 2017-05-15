#include <iostream>
using namespace std;

int main() {
	int giorno1, giorno2;
	int mese1, mese2;
	int anno1, anno2;

	int bisestile1 = 0;
	int bisestile2 = 0;
	int giorni = 0;
	int mesi = 0;
	int anni = 0;
	int futuro = 0;
	int pargolo = 0;
	int febbraio = 28;

	cout << "Digitare la data di oggi (gg mm aaaa):" << endl;
	cin >> giorno1 >> mese1 >> anno1;
	cout << "Digitare la data di nascita scelta (gg mm aaaa):" << endl;
	cin >> giorno2 >> mese2 >> anno2;

	if (anno1 % 100 == 0) {
		if (anno1 % 400 == 0)
			bisestile1 = 1;
	}
	else if (anno1 % 4 == 0) {
		bisestile1 = 1;
	}
	if (anno2 % 100 == 0) {
		if (anno2 % 400 == 0)
			bisestile2 = 1;
	}
	else if (anno2 % 4 == 0) {
		bisestile2 = 1;
	}

	if (anno2 > anno1) {
		 futuro = 1;
	}
	else if (anno2 = anno1) {
		if (mese2 > mese1) {
			futuro = 1;
		}
		else if (mese2 = mese1) {
			if (giorno2 > giorno1) {
				futuro = 1;
			}
		}
		if (anno2 == anno1 && mese2 == mese1 && giorno2 == giorno1) {
			pargolo = 1;
		}
		if (mese1 > 12 || mese2 > 12) {
			cout << "Una delle due date e' scritta in modo incorretto!"<< endl;
		}
		if (giorno1 > 31 || giorno2 > 31) {
			cout << "Una delle due date e' scritta in modo incorretto!" << endl;
		}
		if (giorno1 > 30 && (mese1 == 2 || mese1 == 4 || mese1 == 6 || mese1 == 9 || mese1 == 11)) {
			cout << "Una delle due date e' scritta in modo incorretto" << endl;
		}
		if (giorno2 > 30 && (mese2 == 2 || mese2 == 4 || mese2 == 6 || mese2 == 9 || mese2 == 11)) {
			cout << "Una delle due date e' scritta in modo incorretto" << endl;
		}
		if (giorno1 > 29 && bisestile1 == 0 && mese1 == 1) {
			cout << "Una delle due date e' scritta in modo incorretto!" << endl;
		}
		if (giorno2 > 29 && bisestile2 == 0 && mese2 == 1) {
			cout << "Una delle due date e' scritta in modo incorretto!" << endl;
		}
		
		} return 0;
}
