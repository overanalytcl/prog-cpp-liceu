/*
	Schimb

	Se introduc de la tastatură numerele reale a și b. Să se interschimbe 
	valorile variabilelor a și b, apoi să se afișeze.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, aux;

	cin >> a >> b;
	aux = a;
	a = b;
	b = aux;

	cout << a << " " << b << "\n";
	return 0;
}
