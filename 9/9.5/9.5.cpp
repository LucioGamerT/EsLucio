#include <iostream>
using namespace std;

int somma(int a, int b) {
	int c;
	c = a + b;
	return c;
}

int main() {
	int a = 2;
	int b = 3;
	cout << somma(a,b);
	return 0;
}