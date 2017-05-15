#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a, b, c;
	cout << "Inserisci tre lati: " << endl;
	cin >> a >> b >> c;
	double p = (a + b + c) / 2;
	double A = sqrt(p*(p - a)*(p - b)*(p - c));

	if (b + c < a || b + a < c || a + c < b) {
		cout << "Il triangolo con questi lati non esiste." << endl;
		return 0;
	}

	cout << "L'area del triangolo e' uguale a: " << A << endl;

	return 0;
}