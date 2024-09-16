#include <iostream>
#include <fstream>//inkludujemy fstream

using namespace std;

int main()
{

   //SPOSOB 1:

    //fstream odczyt("dane.txt");//nazwanie zmiennej odczyt i wpisanie pliku
    //int a,b,c;//deklarowanie zmiennych
    //odczyt>>a>>b>>c;//pobieranie
    //cout<<a<<" "<<b<<" "<<c<<endl;//wypisywanie
    //odczyt.close();//zamykanie


    //SPOSOB 2:

    int s;
    fstream odczyt;
    odczyt.open("dane.txt",ios::in);
    int a,b,c;//deklarowanie zmiennych
    ofstream zapis("wynik.txt");//zapisuwanie,wysy³anie do pliku(plik sie sam tworzy)
    //zapis.open("dane.txt",ios::app);dodawanie do pliku tresci
    odczyt>>a>>b>>c;//pobieranie
    s=a+b+c;//sumownaie
    cout<<a<<" "<<b<<" "<<c<<endl;//wypisywanie
    cout<<"Suma: "<<s;
    zapis<<s;
    odczyt.close();//zamykanie odczyt
    zapis.close();



    return 0;
}
