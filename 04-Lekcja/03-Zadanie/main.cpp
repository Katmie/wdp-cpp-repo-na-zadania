#include <iostream>
using namespace std;
int main(){
int n;
int s=0;
int l=0;
int min;
int max;
cin>>n;
if(n==0){
cout<<"Podaj coœ innego oprócz zera"<<endl;
return 0;
}
min=max=n;
while(n!=0){
s+=n;
l++;
if(n>max)
max=n;
if(n<min)
min=n;
cin>>n;
}
double srednia=(double)s/l;
cout<<"Najwiêksza liczba: "<<max<<endl;
cout<<"Najmniejsza liczba: "<<min<<endl;
cout<<"Suma: "<<s<<endl;
cout<<"Œrednia: "<<srednia<<endl;
return 0;
}
