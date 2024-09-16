#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;
int n;
void bubblesort(int tab[])
{
int temp;
    for(int k =1;k<n;k++)
    {
        for (int i=0;i<n-k;i++)
        {
            if(tab[i]>tab[i+1])
            {
                temp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
            }
        }
    }
}
int main()
{
    cout<<"podaj rozmiar tablicy"<<endl;
    cin>>n;
    int tab[n];

    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
    tab[i]=rand()%100+1;

    cout<<tab[i]<<" ";
    }
    bubblesort(tab);
    fstream zapis;
    zapis.open("Wynik.txt",ios::out);
    for(int j=0;j<n;j++){

        cout<<tab[j];
        zapis<<tab[j]<<endl;
    }
    return 0;
}
