#include <iostream>
using namespace std;

int main() {
	cout << "Inserisci un serie di numeri interi positivi e ti diro' quanti di questi sono pari!(max 100 numeri)" << endl;
	int num[100];
	int div = 2;
	int numarr = 0;

	for (int i = 0; i < 100; i++) {
		cout << "elemento " << i + 1 << ": ";
		cin >> num[i];
		if (num[i] == -1) {
			numarr = i;
			break;
		}
	}
	for (int o = 0; o < numarr; o++) {
		if (num[o] % 2 == 0) {
			cout << num[o] << endl;
		}
	}

	return 0;
}