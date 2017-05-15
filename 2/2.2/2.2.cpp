#include <iostream>
using namespace std;

int main() {
	int tempo;
	int sec = 0;
	int min = 0;
	int ore = 0;
	int giorni = 0;
	int sett = 0;
	cout << "Scrivi molti secondi: ";
	cin >> tempo;
	sec = tempo;

	if (tempo >= 60) {
		sett = tempo / 604800;
		giorni = (tempo - sett * 604800) / 86400;
		ore = (tempo - sett * 604800 - giorni * 86400) / 3600;
		min = (tempo - sett * 604800 - giorni * 86400 - ore * 3600) / 60;
		sec = tempo - sett * 604800 - giorni * 86400 - ore * 3600 - min * 60;
	}

	if (sett > 0) {
		cout << "Settimane: " << sett << endl;
	}

	if (giorni > 0) {
		cout << "Giorni: " << giorni << endl;
	}

	if (ore > 0) {
		cout << "Ore: " << ore << endl;
	}
	
	if (min > 0) {
		cout << "Minuti: " << min << endl;
	}

	if (sec > 0) {
		cout << "Secondi: " << sec << endl;
	}

	return 0;
}