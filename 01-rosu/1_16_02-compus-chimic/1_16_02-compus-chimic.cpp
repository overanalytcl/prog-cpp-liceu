/*
	Compus chimic

	Un grup de cercetători studiază un compus chimic descoperit pe planeta Marte.
	În urma analizelor efectuate, au dedus că o moleculă din acest compus este
	formată din nC atomi de carbon, nO atomi de oxigen și nH atomi de hidrogen.
	Știind că masa atomului de carbon este 12, masa atomului de oxigen este 16
	și masa atomului de hidrogen este 1, să se scrie un program care să calculeze
	și să afișeze masa moleculară a acestui compus.
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned int nC, nO, nH, masa;
	cin >> nC >> nO >> nH;

	unsigned int masaC = 12, masaO = 16, masaH = 1;

	masa = masaC * nC + masaO * nO + masaH * nH;

	cout << "Masa moleculara a compusului este " << masa << endl;
}
