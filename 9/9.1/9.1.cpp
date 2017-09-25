#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "Invertire l'ordine di tre valori:\nA: ";
	std::cin >> a;
	std::cout << "B: ";
	std::cin >> b;
	std::cout << "C: ";
	std::cin >> c;

	int* p = &a;
	int* q = &b;
	int* w = &c;						

	int temp = a;
	*p = c;
	*w = b;
	*q = temp;

	std::cout << "\nI valori invertiti sono: " << a << " " << b << " " << c <<"\n"<< std::endl;
	return 0;
}
