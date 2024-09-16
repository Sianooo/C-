#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;
//Zad_2
//Z pliku pobierz 10 liczb naturalnych wiekszych od 1,wypisz je, i obok kazdej z nich wpisz jej
//rozklad na czynniki pierwsze.


void rozkladanie(int a)
{
    int b=2;
    while(a!=1)
    {
        if(a%b==0)
        {
           cout<<b<<" ";
           a=a/b;
        }
        else
        {
             b++;
        }
    }

}

int main()
{
    fstream odczyt;
    odczyt.open("dane.txt",ios::in);
    int a;
    for(int i=0;i<10;i++)
    {
        odczyt>>a;
        cout<< a<<"--->";
        rozkladanie(a);
        cout<<endl;
 }
     return 0;
}

