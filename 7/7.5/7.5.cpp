#include <iostream>
#include <string.h>


int main() {
	char str[256];
	int numeri[256];
	int grandezza = 0;
	int quantita = 0;

/*	std::cout << "Quanti numeri ci sono nella tua stringa?\n";
	std::cout << "\nInserisci la tua stringa: ";
	std::cin.getline(str, 256, '\n');
	std::cout << "Inserisci ora il limite di numeri massimo che vuoi sapere: ";
	std::cin >> grandezza;

	std::cout << "\n( ";
	for (int i = 0; i < grandezza; i++) {
		numeri[i] = 0;
		if (i < grandezza - 1) {
			std::cout << numeri[i] << ", ";
		}
		else {
			std::cout << numeri[i] << " ";
		}
	}


	for (int i=0;i<grandezza;i++) {




}

	std::cout << ")= " << quantita;
	std::cout << "\n\n";

	*/


	std::cout << "test: ";
	std::cin.getline(str, 256, '\n');

	for (int i = 0; str[i] != 5; i++) {
		if (str[i]=='1') {
			quantita++;
		}
	}

	std::cout << quantita << "\n\n";






	return 0;
}  
