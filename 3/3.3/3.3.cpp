#include <iostream>
#include <math.h>
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
	int gmesi1 = 0;
	int gmesi2 = 0;
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

	/*if (mese1 == 1 || mese1 == 3 || mese1 == 5 || mese1 == 7 || mese1 == 8 || mese1 == 10 || mese1 == 12) {
		gmesi1 = 31;
	}
	else if (mese1 == 4 || mese2 == 6 || mese2 == 9 || mese2 == 11) {
		gmesi1 = 30;
	}
	if (mese1 == 2 && bisestile1 == 1) {
		gmesi1 = 29;
	}
	else if (mese1 == 2 && bisestile1 == 0) {
		gmesi1 = 28;
	}

	if (mese2 == 1 || mese2 == 3 || mese2 == 5 || mese2 == 7 || mese2 == 8 || mese2 == 10 || mese2 == 12) {
		gmesi2 = 31;
	}
	else if (mese2 == 4 || mese2 == 6 || mese2 == 9 || mese2 == 11) {
		gmesi2 = 30;
	}
	if (mese2 == 2 && bisestile2 == 1) {
		gmesi2 = 29;
	}
	else if (mese2 == 2 && bisestile2 == 0) {
		gmesi2 = 28;
	} */

	if (anno2 > anno1) {
		futuro = 1;
	}
	else if (anno2 == anno1) { // solito errore dell'operatore uguale (=)! Devi usare l'equivalenza (==)
		if (mese2 > mese1) {
			futuro = 1;
		}
		else if (mese2 == mese1) { // idem
			if (giorno2 > giorno1) {
				futuro = 1;
			}
			/* qui basta mettere un else if con questa condizione perchè messe qui sono già incluse le precedenti
			(cioè siamo già dentro il caso in cui anno1 == anno2 e mese1 == mese2) */
			else if (giorno2 == giorno1) {
				pargolo = 1;
			}
		}
	}

	// soluzione per non avere mille cout uguali
	int err = 0; // in pratica funziona come int futuro e int pargolo; se err == 1 allora mi dici che le date sono sbagliate
	if (mese1 > 12 || mese2 > 12) {
		err = 1;
	}
	if (giorno1 > 31 || giorno2 > 31) {
		err = 1;
	}
	if (giorno1 > 30 && (mese1 == 2 || mese1 == 4 || mese1 == 6 || mese1 == 9 || mese1 == 11)) {
		err = 1;
	}
	if (giorno2 > 30 && (mese2 == 2 || mese2 == 4 || mese2 == 6 || mese2 == 9 || mese2 == 11)) {
		err = 1;
	}
	if (giorno1 > 28 && bisestile1 == 0 && mese1 == 2) {
		err = 1;
	}
	if (giorno2 > 28 && bisestile2 == 0 && mese2 == 2) {
		err = 1;
	}

	if (err == 1) { // come spiegato prima -> se err == 1 allora mi dici che le date sono sbagliate
		cout << "Una delle due date e' scritta in modo incorretto!" << endl;
		return 0; // imposto un uscita dal programma anche qui perchè le date sono sbagliate
	}
	if (anno2 == anno1) {
		anni = 0;
		mesi = mese1 - mese2;
		giorni = giorno1 - giorno2;
		if (mese1 == mese1) {
			mesi = mese1 - mese2;
			giorni = giorno1 - giorno2;
			cout << "Complimenti neonato! Hai " << mesi << " mesi e " << giorni << " giorni!" << endl;
			return 0;
		}
	}

	if (anno1 - anno2 > 100) {
		anni = anno1 - anno2;
		mesi = abs(mese1 - mese2);
		giorni = abs(giorno1 - giorno1);
		cout << "Vecchieto eh! Hai ben " << anni << " anni, " << mesi << " mesi e " << giorni << " giorni!" << endl;
		return 0;
	}
	if (anno1 - anno2 < 100 && anno1 - anno2>0) {
		anni = anno1 - anno2;
		mesi = abs(mese1 - mese2);
		giorni = abs(giorno1 - giorno1);
		cout << "Hai " << anni << " anni, " << mesi << " mesi e " << giorni << " giorni!" << endl;
		return 0;
	}
	return 0;
}
