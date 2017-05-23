#include <iostream>
using namespace std;

int main() {
	int divisori[512];
	int num = 0;

	cout << "Divisori di un numero intero positivo:\n";
	do {
		cout << "Inserisci un numero: ";
		cin >> num;
		if (num < 0 || num == 0) {
			cout << "\nIl numero deve essere positivo e diverso da zero!\n";
		}
	} while (num == 0 || num < 0);

	cout << "\nI porcodii del tuo numero sono: ";
	int a = 0;
	for (int i = num; i > 0; i--) {
		if (num%i == 0) {
			a++;
		}

			/*if (a > 1) {
				cout << ", ";
			}*/
		
	}
	cout << a;
	cout << ".\n\n";

	return 0;
}
