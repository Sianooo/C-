#include <iostream>

using namespace std;
class Pojazd
{
public:
    string marka;
    string kolor;
    int rocznik;

    //konstruktor
    Pojazd()
    {
        marka="Fiat 126p";
        kolor="Czerwony";
        rocznik=1987;
    }

    //destruktor
    ~Pojazd()
    {
        cout<<"Usunieto obiekt";
    }

    //Przeciazenie dwa konstruktory
    Pojazd(string marka2,string kolor2,int rocznik2)
    {
        marka=marka2;
        kolor=kolor2;
        rocznik=rocznik2;
    }

    void malowanie()
    {
        string kolor="Czerwony";
        cout<<endl<<"Przemalowano auto: ";
    }

};

int main()
{
    //definiowanie zmiennej
    //Pojazd autko;
    Pojazd autko2("Porshe","Zielony",2024);
    // autko.marka="Audi";
    // autko.kolor="Niebieski";
    // autko.rocznik=2023;
    cout<<"Auto ma kolor: "<<autko2.kolor<<endl;
    cout<<"Auto ma marke: "<<autko2.marka<<endl;
    cout<<"Auto ma rocznik: "<<autko2.rocznik<<endl;

    return 0;
}
