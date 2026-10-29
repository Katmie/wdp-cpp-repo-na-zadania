#include <iostream>
using namespace std;
int main() {
int a, b;
cout<<"Podaj dwie liczby ca³kowite: ";
cin>>a>>b;
if (a>b) {
cout<<"Wiêksza liczba:"<<a<<endl;
cout<<"Mniejsza liczba:"<<b<<endl;
cout<<a<<">"<<b<<endl;
}
else if (a < b) {
cout<<"Wiêksza liczba:"<<b<<endl;
cout<<"Mniejsza liczba:"<<a<<endl;
cout<<a<<"<"<<b<<endl;
}
else {
cout<<"Wiêksza liczba:"<<a<<endl;
cout<<"Mniejsza liczba:"<<b<<endl;
cout<<a <<"=="<<b<<endl;
}
return 0;
}
