#include <iostream>

int scalare(int a, int v[], int w[]) {

	int risultato = 0;
	for (int i = 0; i < a; i++) {
		risultato += *(v + i) * *(w +i);
	}
	return risultato;
}


int main() {

	int n;
	int vet1[64], vet2[64];

	std::cout << "Prodotto scalare tra due vettori di uguale grandezza:\nInserire la grandezza dei vettori: ";
	std::cin >> n;
	std::cout << "\nInserire ora i valori del primo vettore:\n";
	for (int i = 0; i < n; i++) {
		std::cout << i + 1 << ": ";
		std::cin >> vet1[i];
	}
	std::cout << "Inserire ora i valori del secondo vettore:\n";
	for (int i = 0; i < n; i++) {
		std::cout << i + 1 << ": ";
		std::cin >> vet2[i];
	}

	std::cout << "\nRisultato: " << scalare(n, vet1, vet2) << "\n\n";

	return 0;
}
