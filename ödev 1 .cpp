#include <iostream>
using namespace std ;
int main(){
char ch;
float fiyat;
const float fiyatD=345.68;
const float fiyatK=123.45;
const float fiyatS=567.89;
cout << "Aldiginiz malin kodunu giriniz" << endl;
cin >> ch;
cout << endl;
switch(ch){
case 'D':
case 'd':
cout << "Urun: Defter" << endl; 
cout << "Fiyati: " << fiyatD << " TL" << endl;
break;
case 'K':
case 'k':
cout << "Urun: Kitap" << endl; 
cout << "Fiyati: " << fiyatK << " TL" << endl;
break;
case 'S':
case 's':
cout << "Urun: Silgi" << endl; 
cout << "Fiyati: " << fiyatS << " TL"<< endl;
break;
default:
cout << "Birsey satin almadiniz." << endl; break; }
cout << "Tesekkur ederiz." << endl;
return 0; 
}

