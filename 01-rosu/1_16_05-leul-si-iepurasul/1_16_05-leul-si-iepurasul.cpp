/*
	Leul și iepurașul

	Un iepuraș zglobiu ieși din pădure și începu să alerge pe câmpie cu o viteză
	constantă de v1 m/s. După un timp t0, apare la marginea pădurii un leu. Leul
	zări iepurașul și începu să alerge după el cu o viteză constantă de v2 m/s.
	Scrieți un program care să afișeze după câte secunde prinde leul iepurele sau
	valoarea -1 dacă leul nu prinde iepurele.
*/

#include <iostream>
using namespace std;

int main()
{
	float v1, v2, t;
	cin >> v1 >> v2 >> t;

	float v = (v1 >= v2 ? -1 : v1 * t / (v2 - v1));

	cout << v << "\n";
	return 0;
}
