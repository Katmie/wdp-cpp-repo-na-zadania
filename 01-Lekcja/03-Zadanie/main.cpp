#include <iostream>
#include <iomanip>
using namespace std;
int main() {
string imie;
int wiek;
double wzrost;
cout << "Podaj imie: ";
cin >> imie;
cout << "Podaj wiek: ";
cin >> wiek;
cout << "Podaj wzrost: ";
cin >> wzrost;
cout << imie << endl;
cout << wiek << endl;
cout << fixed << setprecision(2) << wzrost << endl;
return 0;
}
