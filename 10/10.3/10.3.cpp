#include <iostream>
#include <string.h>
using namespace std;

class RigaOrdine {
public:
	int codice_ordine;
	char descrizione_ordine[256];
	int num_pz_ordinati;
	double prezzo_x_unita;

	// Member functions declaration:
	void memorizzazione_ordine(void);
	void mostra_dati_ordine(void);
	void modifica_dato(RigaOrdine);
	void prezzo_tot(void);
};

// Member functions definitions:
void RigaOrdine::memorizzazione_ordine() {
	cout << "Codice ordine: ";
	cin >> codice_ordine;
	cout << "Digitare il tipo di prodotto dell'ordine: ";
	cin >> descrizione_ordine;
	//	cin.getline(descrizione_ordine, 256, '\n');
	cout << "Numero di pezzi ordinati: ";
	cin >> num_pz_ordinati;
	cout << "Prezzo unitario: ";
	cin >> prezzo_x_unita;
}

void RigaOrdine::mostra_dati_ordine() {
	cout << "Codice ordine: " << codice_ordine;
	cout << "\nDescrizione ordine: " << descrizione_ordine;
	cout << "\nNumero di pezzi ordinati: " << num_pz_ordinati;
	cout << "\nPrezzo unitario: " << prezzo_x_unita;
}

void RigaOrdine::modifica_dato(RigaOrdine) {					// HELP!
	int scelta1 = 0;

	do {
		cout << "Quale dato dell'ordine si desidera modificare?";
		cout << "\n1: Codice ordine;\n2: Tipo unita';\n3: Numero di pezzi ordinati;\n4: Prezzo unitario;\n0: Cambiare operazione\nScelta: ";
		cin >> scelta1;
		switch (scelta1) {
		case 1: {
			int new_codice = 0;
			cout << "Nuovo codice: ";
			cin >> new_codice;
			codice_ordine = new_codice;
			cout << "\n";
			break;
		}
		case 2: {
			char new_tipo[256];												// HELP!
			cout << "Nuovo prodotto: ";
			cin >> new_tipo;
			descrizione_ordine[256] = new_tipo[256];
			cout << "\n";
			break;
		}
		case 3: {
			int new_pz_ordinati = 0;
			cout << "Nuovo numero di pezzi ordinati: ";
			cin >> new_pz_ordinati;
			num_pz_ordinati = new_pz_ordinati;
			cout << "\n";
			break;
		}
		case 4: {
			double new_prezzo = 0.0;
			cout << "Nuovo prezzo unitario: ";
			cin >> new_prezzo;
			prezzo_x_unita = new_prezzo;
			cout << "\n";
			break;
		}
		}
	} while (scelta1 != 0);
}					

void RigaOrdine::prezzo_tot() {
	int prezzo_tot = 0;
	prezzo_tot = num_pz_ordinati*prezzo_x_unita;
	cout << "Costo totale dell'ordine (unita'x prezzo unitario): " << prezzo_tot;
}

// Main function for the program
int main()
{
	int scelta = 0;

	RigaOrdine RigaOrdine1;					// Dichiarazione di una classe RigaOrdine1 di tipo RigaOrdine

	cout << "Memorizzazione ordine:\n";
	RigaOrdine1.memorizzazione_ordine();

	do {
		cout << "\n---------------------------\nOperazione da effettuare:\n1: Mostra ordine memorizzato;\n2: Modifica di un dato dell'ordine memorizzato;\n3: Prezzo totale dell'ordine;\n4: Riepilogo ordine con prezzo totale;\n0: ESCI\nScelta: ";
		cin >> scelta;
		switch (scelta) {
		case 1: {
			cout << "---------------------------\n";
			RigaOrdine1.mostra_dati_ordine();
			break;
		}
		case 2: {
			cout << "---------------------------\n";
			RigaOrdine1.modifica_dato(RigaOrdine1);
			break;
		}
		case 3: {
			cout << "---------------------------\n";
			RigaOrdine1.prezzo_tot();
			break;
		}
		case 4: {
			cout << "---------------------------\n";
			RigaOrdine1.mostra_dati_ordine();
			cout << "\n-------";
			RigaOrdine1.prezzo_tot();
			break;
		}
		}
	} while (scelta != 0);
	cout << "\nGrazie per aver utilizzato il nostro programma e arrivederci.\n\n";

	return 0;
}