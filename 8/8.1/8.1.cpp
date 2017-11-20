#include <iostream>
#include <string.h>

const int num_max_esami = 100;

void titolo_esercitazione() {
	std::cout << "Sessione d'esami:\n\n";
}

struct esame {
	char nome[32];
	char cognome[32];
	int matricola;
	int voto;
	char materia[32];
};

void memorizzazione_esame(int& n, esame e[]) {
	std::cout << "\nEsame num." << n + 1 << ":\n";
	std::cout << "Nome: ";
	std::cin >> e[n].nome;
	std::cout << "Cognome: ";
	std::cin >> e[n].cognome;
	std::cout << "Numero di matricola: ";
	std::cin >> e[n].matricola;
	std::cout << "Nome esame: ";
	std::cin >> e[n].materia;
	std::cout << "Voto in trentesimi: ";
	std::cin >> e[n].voto;
	std::cout << "\n";
	n++;
}

void stampaEsami(const int& n, esame e[]) {

	for (int i = 0; i < n; i++) {
		std::cout << "Esame num." << i + 1 << "\n";
		std::cout << e[i].nome << " " << e[i].cognome << " (" << e[i].matricola << ")\n" << e[i].materia << ": " << e[i].voto << "\n\n";
	}
}

double media_voti(const int& n, esame e[]) {
	double media = 0;
	int somma_voti = 0;
	for (int i = 0; i < n; i++) {
		somma_voti += e[i].voto;
		media = somma_voti / double(n);
	}
	return media;
}

int filtro_voti(const int& n, esame e[]) {
	int voto_scelto = 0;
	int sup_voti = 0;
	std::cout << "\n---------------------------\nDigitare il voto con cui filtrare gli esami: ";
	std::cin >> voto_scelto;
	for (int i = 0; i < n; i++) {
		if (e[i].voto > voto_scelto) {
			sup_voti++;
		}
	}
	return sup_voti;
}

void istogramma(const int& n, esame e[]) {
	std::cout << "\n---------------------------\nIstogramma dei voti d'esame:\n";
	std::cout << "VOTO:-0--1--2--3--4--5--6--7--8--9-10-11-12-13-14-15-16-17-18-19-20-21-23-24-25-26-27-28-29-30|\n";
	for (int i = 0; i < n; i++) {
		std::cout << "TEST:-|";
		for (int k = 0; k < e[i].voto; k++) {
			std::cout << "XXX";
		}
		std::cout << "\n";
	}
}

void reset() {

}

int main() {
	int num_esami = 0;
	int scelta;

	esame esami[num_max_esami];

	do
		{
		std::cout << "Quale operazione si desidera effettuare?\n1: Inserisci esame\n2: Riepilogo esami\n3: Media dei voti\n4: Numero degli studenti con voto superiore al valore scelto\n5: Istogramma dei voti\n6: Resettare dati(WORK IN PROGRESS)\n0: Esci\n\nScelta: ";
		std::cin >> scelta;
		switch (scelta)
			{
			case 1:
				{
					memorizzazione_esame(num_esami, esami);
					break;
				}
				case 2:
				{
					std::cout << "\n---------------------------\nRiepilogo sessione d'esami:\n\n";
					stampaEsami(num_esami, esami);
					std::cout << "---------------------------\n";
					break;
				}
				case 3:
				{
					std::cout << "\n---------------------------\nMedia dei voti: " << media_voti(num_esami, esami) << "\n---------------------------\n\n";
					break;
				}
				case 4:
				{
					std::cout << "\nNumero di studenti con valutazione superiore al voto selezionato: " << filtro_voti(num_esami, esami) << "\n\n---------------------------\n";
					break;
				}
				case 5:
				{
					istogramma(num_esami, esami);
					std::cout << "\n---------------------------\n";
					break;
				}
				case 6:
				{
					reset();
					std::cout << "\n";
					break;
				}
			}
		} while (scelta != 0);

	std::cout << "\n";
	return 0;
}
