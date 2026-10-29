#include <iostream>
using namespace std;
int main(){
int a, b;
cout<<"Podaj pierwsz¹ liczbê: ";
cin>>a;
cout<<"Podaj drug¹ liczbê: ";
cin>>b;
if (b==0){
cout<<"Nie mo¿na dzieliæ przez 0"<<endl;
}
else{
if(a%b==0){
cout<<"Liczba "<<a<<"jest podzielna przez"<<b<<endl;
}
else{
cout<<"Liczba "<<a<<"nie jest podzielna przez"<<b<<endl;
}
}
return 0;
}
