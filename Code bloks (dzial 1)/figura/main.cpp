#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <time.h>

using namespace std;

//zad_1:
  //  narysuj figure zlozona z punktow ktorych wspolrzedne spelniaja nastepujace warunki(x,y) x,y sa rzeczywiste,
   // przedzial x<0;2> i  y to samo, x i y doo kwadratu >/4. punktow doo nalezacej doo tej figury ma byc 500.

int main()
{
    float x,y;//liczby rzeczywiste
    int a;//nasz licznik
    a=0;
    srand(time(NULL));//zawsze musi byc przy losowaniu liczb
    ofstream zapis("plik.xls");//zmienna plikowa(umozliwia wyslanie do pliku
    while(a<500)
    {
      x=((float)rand()/RAND_MAX)*2;//daje to przedzial <0;2>,jakby bylo bez *2 byl by przedzial<0;1>
      y=((float)rand()/RAND_MAX)*2;

      if(x*x+y*y>=4)
      {
       zapis<<x<<","<<y<<endl;
       a++;
      }
    }
    zapis.close();


    return 0;
}


//zapis do pliku,pobieranie itp,indludy,
