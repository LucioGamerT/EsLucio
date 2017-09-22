#include <iostream>
#include <string.h>

const int num_max_appartamenti = 100;

void titolo_esercitazione() {
	std::cout << "Lista appartamenti:\n\n";
}

struct appartamento {
	int codice_identif;
	char via[32];
	char comune[32];
	int vani;
	int sup_mq;
	int prezzo;
};

void memorizzazione_apparta(int& n, appartamento e[]) {
	std::cout << "\nAppartamento num." << n + 1 << ":\n";
	std::cout << "Codice identificativo: ";
	std::cin >> e[n].codice_identif;
	std::cout << "Via: ";
	std::cin >> e[n].via;
	std::cout << "Comune: ";
	std::cin >> e[n].comune;
	std::cout << "Numero di vani: ";
	std::cin >> e[n].vani;
	std::cout << "Superficie in mq.: ";
	std::cin >> e[n].sup_mq;
	std::cout << "Prezzo: ";
	std::cin >> e[n].prezzo;
	std::cout << "\n";
	n++;
}

double media_prezzo(const int& n, appartamento e[]) {
	double media = 0;
	int somma_prezzi = 0;
	for (int i = 0; i < n; i++) {
		somma_prezzi += e[i].prezzo;
		media = somma_prezzi / double(n);
	}
	return media;
}

int minimo_prezzo(const int& n, appartamento e[]) {
	int min_prezzo = 0;
	min_prezzo = (e[0].prezzo>e[1].prezzo) ? e[0].prezzo : e[1].prezzo;
	for (int i = 0; i < n; i++) {
		if (min_prezzo > e[i].prezzo) {
			min_prezzo = e[i].prezzo;
		}
	}
	return min_prezzo;
}

int massimo_prezzo(const int& n, appartamento e[]) {
	int max_prezzo = 0;
	max_prezzo = (e[0].prezzo < e[1].prezzo) ? e[0].prezzo : e[1].prezzo;
	for (int i = 0; i < n; i++) {
		if (max_prezzo > e[i].prezzo) {
			max_prezzo = e[i].prezzo;
		}
	}
	return max_prezzo;
}

double media_prezzo_filtro_sup(int a, int b, const int& n, appartamento e[]) {
	double media = 0;
	int somma_prezzi = 0;
	int check = 0;

	for (int i = 0; i < n; i++) {
		if (e[i].sup_mq > a & e[i].sup_mq < b) {
			check++;
		}

		// TROVARE MODO DI UTLIZZAZRE SOLO SUP FILTRARE, PROBABILE BISOGNO DI ORDINARLE O FARE GRUPPO DELLE SUP SEPARATO.

	}
	for (int i = 0; i < check; a++) {
		somma_prezzi += e[i].prezzo;
		media = somma_prezzi / double(check);
	}
	return media;
}				//  DA FINIRE!!!

int conto_apt_per_vano(int a[], const int &n, appartamento e[]) {

	for (int i = 0; i < n; i++) {
		if (e[i].vani == 1) {
			a[0]++;
		}
		if (e[i].vani == 2) {
			a[1]++;
		}
		if (e[i].vani == 3) {
			a[2]++;
		}
		if (e[i].vani > 3 & e[i].vani < 8) {
			a[3]++;
		}
		if (e[i].vani > 7) {
			a[4]++;
		}
	}
	return a[0] + a[1] + a[2] + a[3] + a[4];
}

void stampaAppartamenti_per_vano(int a, const int &n, appartamento e[]) {

	for (int i = 0; i < n; i++) {
		int num_app = 0;
		if (e[i].vani == a) {
			num_app++;
			std::cout << "\nAppartamento num." << num_app << "\n";
			std::cout << "Via " << e[i].via << " (" << e[i].codice_identif << ") " << e[i].comune << "\nVani: " << e[i].vani << " |  Superficie in mq.: " << e[i].sup_mq << "\n";
		}
	}
}


void stampaAppartamenti(const int& n, appartamento e[]) {

	for (int i = 0; i < n; i++) {
		std::cout << "\nAppartamento num." << i + 1 << "\n";
		std::cout << "Via " << e[i].via << " (" << e[i].codice_identif << ") " << e[i].comune << "\nVani: " << e[i].vani << " |  Superficie in mq.: " << e[i].sup_mq << "\n";
	}
}

int main() {
	int num_appartamento = 0;
	int scelta = 0;

	appartamento appartamenti[num_max_appartamenti];

	do
	{
		std::cout << "Quale operazione si desidera effettuare?\n1: Inserisci informazioni relative all'appartamento\n2: Prezzo massimo, minimo e la loro media\n3: Prezzo medio tra gli appartementi con superficie in mq. desiderata(WORK IN PROGRESS)\n4: Numero di appartamenti per vano\n5: Informazioni relativi agli appartamenti con numeri di vani scelti dall'utente\n6: Riepilogo appartamenti\n7: Resettare dati(WORK IN PROGRESS)\n0: Esci\nScelta: ";
		std::cin >> scelta;
		switch (scelta) {
		case 1: {
			memorizzazione_apparta(num_appartamento, appartamenti);
			break;
		}
		case 2: {
			std::cout << "\n---------------------------\nInformazione sui prezzi:\nPrezzo massimo: " << massimo_prezzo(num_appartamento, appartamenti) << "\n";
			std::cout << "Prezzo minimo: " << minimo_prezzo(num_appartamento, appartamenti) << "\n";
			std::cout << "Media dei prezzi: " << media_prezzo(num_appartamento, appartamenti) << "\n---------------------------\n\n";
			break;
		}
		case 3: {
			break;
			int min_sup = 0;
			int max_sup = 0;
			std::cout << "\n---------------------------\nInserire minima e massima superficie:\n Min: ";
			std::cin >> min_sup;
			std::cout << "  |   Max: ";
			std::cin >> max_sup;
			std::cout << "\nPrezzo medio appartamenti filtrati: " << media_prezzo_filtro_sup(min_sup, max_sup, num_appartamento, appartamenti) << "\n---------------------------\n";

		}
		case 4: {
			int apt_per_vani[5] = { 0, 0, 0, 0, 0 };
			std::cout << "\n---------------------------\nNumero di appartamenti: " << conto_apt_per_vano(apt_per_vani, num_appartamento, appartamenti) << "\n";
			std::cout << "Monolocali: " << apt_per_vani[0] << "\n";
			std::cout << "Bilocali: " << apt_per_vani[1] << "\n";
			std::cout << "Trilocali: " << apt_per_vani[2] << "\n";
			std::cout << "Appartamenti con 3 finoa 7 vani: " << apt_per_vani[3] << "\n";
			std::cout << "Appartamenti con 8+ vani: " << apt_per_vani[4] << "\n";
			std::cout << "---------------------------\n";
			break;
		}
		case 5: {
			int num_vani = 0;
			std::cout << "\n---------------------------\nInserire numero di vani desiderato: ";
			std::cin >> num_vani;
			stampaAppartamenti_per_vano(num_vani, num_appartamento, appartamenti);
			std::cout << "---------------------------\n";
			break;
		}
		case 6: {
			std::cout << "\n---------------------------\nRiepilogo appartamenti:\n";
			stampaAppartamenti(num_appartamento, appartamenti);
			std::cout << "---------------------------\n";
			break;
		}
		}

	} while (scelta != 0);

	std::cout << "\nArrivederci e grazie per aver utilizzato il nostro servizio.\n\n";
	return 0;
}










