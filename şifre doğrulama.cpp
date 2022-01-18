#include <iostream>
using namespace std;
int main() {
   string input ;
   string password = "adilemre";
   cout << "lütfen parolanızı giriniz :" ;
   cin >> input;

   if(password == input) {
      cout <<"parolanızı doğru girdiniz..." ;

   }
   else {
      cout << "parolanızı yanlış girdiniz...";
   
   }
}


