#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int a,b,c;
    float x1,x2,d;
    cout << "ax2+bx+c olarak bir denklem tanımlayalım..." << endl;
      cout <<"a :" << endl;
      cin >> a;
      cout << "b :" << endl;
      cin >> b;
      cout <<"c :" << endl;
      cin >> c;
      d = (b^2) - (4*a*c);
    if(d<0){
        cout <<"delta :"<< d << "reel kök yoktur" << endl;
    }
    else 
    cout << "birinci kök : " << x1 << endl;
    cout << "ikinci kök : " << x2 << endl;
     return 0;
}