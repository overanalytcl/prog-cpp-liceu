/*
	Triunghi

	Fie x un număr natural format din 5 cifre (x4x3x2x1x0). Să se afișeze un 
	triunghi format din cifrele numărului astfel:
	- pe prima linie (în vârful triunghiului) se va afla cifra din mijloc (x2);
	- pe linia a doua se vor afla cifrele x3x2x1;
	- pe a treia linie se vor afla toate cifrele lui x.

	De exemplu, dacă x = 15289, triunghiul va arăta astfel:

	  2
	 528
	15289
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned int x;
	cin >> x;

	unsigned int x0, x1, x2, x3, x4;
	x4 = x % 10; x /= 10;
	x3 = x % 10; x /= 10;
	x2 = x % 10; x /= 10;
	x1 = x % 10; x /= 10;
	x0 = x % 10; x /= 10;

	cout << "  "      << x2             << "\n";
	cout << " " << x1 << x2 << x3       << "\n";
	cout <<  x0 << x1 << x2 << x3 << x4 << "\n";

	return 0;
}
