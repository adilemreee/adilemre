#include <iostream>
using namespace std;
int main () {
 string parola = "1234";
 string input ;
  do{
      cout   << "parolanızı giriniz :" ;
      cin >> input ;
        if(parola != input) {
          cout << "parolanızı yanlış girdiniz..." << endl;
        }
  } while (parola != input);
  cout << "parolanzı doğru giriniz..."<< endl;
   return 0;
}