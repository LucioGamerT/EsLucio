#include <iostream>

int swap(int a[]) {
	int temp = a[1];
	int *p = &a[1];
	int *q = &a[2];

	*p = a[2];
	*q = temp;

	return a[2];
}

int main()
{
	int num[32];

	std::cout << "Invertire il valore di due numeri interi attraverso l'utilizzo di una funzione:\n";
	std::cout << "A: ";
	std::cin >> num[1];
	std::cout << "B: ";
	std::cin >> num[2];

	swap(num);
	std::cout << "Numero invertito: " << num[1] << num[2] << "\n\n";

	return 0;
}
