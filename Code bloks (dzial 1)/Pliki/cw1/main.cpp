#include <iostream>

using namespace std;

int sumacyfr(int a){

    int suma=0,r;
    do{
        r=a%10;
        suma=suma+r;
        a=(a-r)/10;
      }
      while(a!=0);
      return suma;
}
int main()
{
    cout<<sumacyfr(123)<<endl;

    fstream odczyt("dane.txt");
    int a;
    cout<<a<<endl;
    odczyt.close();

    return 0;
}
