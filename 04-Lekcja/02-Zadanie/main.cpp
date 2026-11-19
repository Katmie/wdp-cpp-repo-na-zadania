#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
double liczba, suma=0;
for (int i=0; i<n; i++) {
cin>>liczba;
suma+=liczba;
}
double œrednia=suma/n;
cout<<"Suma: "<<suma<<endl;
cout<<"Srednia: "<<œrednia<<endl;
return 0;
}
