#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;


//10 wyrazow zapisanych w pliku malymi literami alfabetu lacinskiego zaszyfrowac uzywajac kluczy
//z pliku klucze.txt w nastepujacy sposob do kodu ascii danego znaku dodajemy numer litery z klucza i odczytujemy znak odpowiadajacy kodowi rownemu sumie
string szyfrowanie(string wyraz,string klucz)
{
    int d1=wyraz.length();
    int d2=klucz.length();
    string wynik="";
    int j=0;

    for(int i=0;i<d1;i++)
    {
        if(d2>=d1)
        {
            if(((int)wyraz[i]+((int)klucz[j]-96))<=122)
            {
            wynik+=(char)((int)wyraz[i]+((int)klucz[j]-96));
            }
            else
            {
            wynik+=(char)((int)wyraz[i]+((int)klucz[j]-96)-26);
            }
            j++;
        }
        else
        {
            j=0;
        }
    }
    return wynik;
}

int main()
{
/*
    ifstream odczyt("wyrazy.txt");
    ifstream odczyt2("klucze.txt");
    string wyraz,klucz;
    for(int i=0;i<10;i++)
    {
        odczyt>>wyraz;
        odczyt2>>klucz;
    }
    */
    cout<<szyfrowanie("ataz","aaaa")<<endl;
    return 0;
}
