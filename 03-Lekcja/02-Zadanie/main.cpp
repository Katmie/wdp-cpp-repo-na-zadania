#include <iostream>
using namespace std;
int main() {
int a, b;
char dzialanie;
cout<<"Podaj pierwsz¹ liczbê: ";
cin>>a;
cout<<"Podaj znak dzialania (+, -, *, /, %): ";
cin >>dzialanie;
cout <<"Podaj drug¹ liczbê: ";
cin>>b;
switch(dzialanie) {
case '+':
cout<<"Wynik: "<< a + b <<endl;
break;
case '-':
cout<<"Wynik: "<< a - b <<endl;
break;
case '*':
cout<<"Wynik: "<< a * b <<endl;
break;
case '/':
if (b != 0)
cout<<"Wynik: "<< a / b<<endl;
else
cout<<"Blad: nie mo¿na dzieliæ przez zero!"<<endl;
break;
case '%':
if (b!=0)
cout<<"Wynik: "<<a % b<<endl;
else
cout<<"Bl¹d: nie mo¿na wykonaæ modulo przez zero!"<<endl;
break;
default:
cout<<"B³ad: nieznany operator!"<<endl;
}
return 0;
}
