#include <iostream>

using namespace std;

int NWD(int a, int b)//nag��wek funkcji
{
    int nwd;
    while(a!=b)//warunek
    {
        if(a>b)//
        {
            a=a-b;
        }
        else
        {
            b-=a;
        }
    }
    nwd=a;
    return nwd;
}


int main()//wywyo�ujemy fukcje
{
    int x,y;//deklaracja zmiennych x,y
    cout << "Podaj dwie liczby" << endl;
    cin>>x;
    cin>>y;
    //wypisywanie dzia�ania fukcji
    cout<<NWD(x,y);//tutaj nie dajemy intow a,b !

    return 0;
}
