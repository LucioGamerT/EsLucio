#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int r = 0;
	char c = 0;
	int mcd = 0;
	int div = 0;

	cout << "MCD di due numeri:\n";
	do {
		c = 0;
		cout << "Inserisci la coppia di numeri di cui vuoi sapere l'MCD: "; cin >> a >> b;

		if (b == 0) {
			mcd = a;
		}
		/*for (r = a%b; r != 0) {
			if (a%b == 0) {
				mcd = b;
			}
			else if (a%b != 0) {
				r = a%b;
				b = a; r = b;
			}*/
		}

		cout << "MCD: " << mcd << "\n\n";
		cout << "Vuoi ripetere l'operazione? Se si digita 1, in caso contrario digita 0.\nScelta: ";
		cin >> c; cout << "\n";
	} while (c == '1');

	return 0;
}
