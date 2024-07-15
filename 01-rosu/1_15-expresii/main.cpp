#include <iostream>
#include <string>
using namespace std;

string bin(int n)
{
	string str(16, '0');

	unsigned int mask = 1U << (16 - 1);
	for (int i = 0; i < 16; ++i)
	{
		if (n & mask)
		{
			str[i] = '1';
		}
		mask >>= 1;
	}

	return str;
}

int main()
{
	int a = 3, b = 5;
	float x = 2.5;

	cout << b % 2 << " " << a / 2 << " " << x / 2 << "\n";

	int m = 3, n = 5;
	float y = 2.5;

	cout << m++ << " " << m << "\n";
	cout << --n << " " << n << "\n";

	int c = --a;
	cout << c << " " << a << "\n";

	c = a--;
	cout << c << " " << a << "\n";

	int r1 = (3 > 5); // 0
	int r2 = (7 <= 3 + 12); // 1
	cout << r1 << " " << r2 << "\n";

	int r3 = (3 == 2 + 1); // 1
	int r4 = (3 != 2 + 1); // 0
	cout << r3 << " " << r4 << "\n";

	int A = 5, B = 10, z = 4;
	cout << !(z % 2) << "\n"; // 1 daca z e par, 0 in caz contrar

	cout << ((z >= A) && (z <= B)) << "\n"; // 1 daca x∈[A,B], 0 in caz contrar

	cout << ((z < A) || (z > B)) << "\n\n"; // 0 daca x∈[A,B], 1 in caz contrar

	int p = 3, q = 0x1f8a, r = 0xf0f5;
	cout << "q      = " << bin(q) << " = " << q << "\n"
		<< "r      = " << bin(r) << " = " << r << "\n"
		<< "~q     = " << bin(~q) << " = " << (~q) << "\n"
		<< "~r     = " << bin(~r) << " = " << (~r) << "\n"
		<< "q ^ r  = " << bin(q ^ r) << " = " << (q ^ r) << "\n"
		<< "q & r  = " << bin(q & r) << " = " << (q & r) << "\n"
		<< "q | r  = " << bin(q | r) << " = " << (q | r) << "\n"
		<< "q >> 3 = " << bin(q >> 3) << " = " << (q >> 3) << "\n"
		<< "q << 3 = " << bin(q << 3) << " = " << (q << 3) << "\n\n";

	int g = 10, h = 0;
	long i = 100001;
	float j = 0, k = 5;

	cout << g << " ";
	g += 2;
	cout << g << "\n";

	cout << j << " ";
	j = (g + i) / 2;
	cout << j << "\n";

	cout << g << " " << h << " ";
	h = g *= 2;
	cout << g << " " << h << "\n";

	cout << g << " ";
	g = k / 2;
	cout << g << "\n";

	cout << (float)g << " " << (int)(i / 2.5154) << "\n";
	
	cout << sizeof(g) << " " << sizeof(i) << " " << sizeof(k) << "\n";

	return 0;
}