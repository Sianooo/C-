#include <iostream>

using namespace std;

void zamiana (int a,int p)
{
    int tab[32];
    int i = 0;
    while(a!=0)
    {
        tab[i]=a%p;
        a=a/p;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        switch(tab[j])
        {
        case 10:
            cout<<"A";
            break;
        case 11:
            cout<<"B";
            break;
        case 12:
            cout<<"C";
              break;
        case 13:
            cout<<"D";
              break;
        case 14:
            cout<<"E";
              break;
        case 15:
            cout<<"F";
            break;
        default:
            cout<<tab[j];
        }
    }
}

int main()
{
   zamiana(30,16);
    return 0;
}
