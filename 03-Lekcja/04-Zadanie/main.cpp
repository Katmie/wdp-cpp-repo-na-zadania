#include <iostream>
using namespace std;
int main()
{
int ocena1, ocena2, ocena3, ocena4, ocena5;
int licznik=0;
double œrednia;
cout<<"Podaj piêæ ocen: ";
cin>>ocena1>>ocena2>>ocena3>>ocena4>>ocena5;
srednia=(ocena1+ocena2+ocena3+ocena4+ocena5)/5.0;
if(ocena1==1) licznik++;
if(ocena2==1) licznik++;
if(ocena3==1) licznik++;
if(ocena4==1) licznik++;
if(ocena5==1) licznik++;
cout<<"Srednia ocen: "<<œrednia<<endl;
cout<<"Liczba ocen niedostatecznych: "<<licznik<<endl;
return 0;
}
