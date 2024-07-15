/*
    Disc

    Fie r un număr real, citit de la tastatură, care reprezintă lungimea razei 
    unui cerc. Să se scrie un program care să calculeze și să se afișeze aria 
    și perimetrul discului de rază r.
*/

#include <iostream>
using namespace std;

double PI = 3.14159265358979323846;

int main()
{
    double r;
    cin >> r;
    double arie = PI * r * r;
    double perimetru = 2 * PI * r;

    cout << "Aria = " << arie << "\n" 
        << "Perimetrul = " << perimetru << "\n";
}
