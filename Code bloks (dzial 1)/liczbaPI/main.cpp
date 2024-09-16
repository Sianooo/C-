#include <iostream>
#include <time.h>//inkrementujemy biblioteke
#include <stdlib.h>

using namespace std;
float PI ()
{
double ikw=100000000000;
double iko=0;
int i;
float x,y;
for(i=1;i<=ikw;i++)//tworzymy funkcje
{
x = ((float)rand()/RAND_MAX)*(1-0)+0;//nowe wzory!
y = ((float)rand()/RAND_MAX)*(1-0)+0;
if(x*x+y*y<=1)
{
iko+=1;

}
}
float pi;
pi = (4*iko)*ikw;
return pi;
}


int main()
{
  cout<<pi()<<endl;
  return 0;
}


//motecarlo(wszystko)
//klasyczne algorytmy:nwd,liczba pierwsza, rozklad na czynniki pierwsze , i suma cyfr w danej liczbie
//pobieranie z pliku(petla) i sprawdzenie czy bedzie parzysta zadanie przykladowe
//pobieranie i zapisywanie doo pliku
//denerownie liczb rzeczywistych i calkowitych




