#include <iostream>
#include <math.h>
using namespace std;

int inverti_numero(char a[]) {
	int esp = 0;
	double num1 = 0;

	if (a[0] == '-') {
		cout << "Il numero inserito non è positivo!\n";
		return -1;
	}
	for (int i = 0; a[i] != '\0'; i++) {
		if (!(a[i] >= '0' && a[i] <= '9')) {
			cout << "Numeri non altri caratteri... *facepalm*\n";
			return -1;
		}
		else {
			num1 += (a[i] - '0') * (pow(10, esp));   // '0' devo metterlo perchè sto lavorando con dei char non con numeri quindi 1 = 49 in char e devo fa 1 - 0 = 49 - 48 per avere il numero 1
			esp++;
		}
	}
	return num1;
}

int main() {
	char num1[32];
	cout << "Inserire il numero che si vuole invertire: "; cin >> num1;
	double num2 = inverti_numero(num1);
	cout << "\nIl numero invertito e' " << num2 << ".";

	cout << "\n\n";
	return 0;
}
