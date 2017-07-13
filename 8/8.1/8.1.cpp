#include <iostream>
#include <string.h>

const int num_max_esami = 5;

void titolo_esercitazione() {
	std::cout << "Sessione d'esami:\n\n";
}

struct esame {
	char nome[32];
	char cognome[32];
	int matricola;
	int voto;
};

void scriviEsami(esame esami) {

	std::cout << esami.nome << " " << esami.cognome << " (" << esami.matricola << "): " << esami.voto << "\n\n";
}

int main() {
	esame esami[num_max_esami];
	for (int n = 0; n < 6; n++) {
		std::cout << "Esame num." << n << ":\n";
		std::cout << "Nome: ";
		std::cin >> esami[n].nome;
		std::cout << "Cognome: ";
		std::cin >> esami[n].cognome;
		std::cout << "Numero di matricola: ";
		std::cin >> esami[n].matricola;
		std::cout << "Voto in trentesimi: ";
		std::cin >> esami[n].voto;
		std::cout << "\n";
	}

	std::cout << "\n--------------------------------------\n\nRiepilogo sessione d'esami:\n";
	for (int n = 1; n < 6; n++) {
		std::cout << "Esame num." << n << ":\n";
		scriviEsami(esami[n]);
		return 0;
	}
}
