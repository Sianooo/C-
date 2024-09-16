#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

int N;

void insertionsort(int tab[])
{
int temp, k;
for(int i;i<N;i++)
{
    tab[i]=temp;
    while(k>=0 && tab[k]>temp)
    {
        tab[k+1]=tab[k];
        k=k-1;
    }
    tab[k+1]=temp;
}
}

int main()
{
    ofstream zapis("zapis.txt");
    N=30;
    srand(time(NULL));
    int tab[N];
    for(int i=0;i<N;i++)
    {
    tab[i]=(rand()%100)+1;
    cout <<" "<<tab[i];
    zapis<<" "<<tab[i];
    }
    insertionsort(tab);
    cout <<"\t"<<"Sortowanie:"<<"\t";
    zapis<<" "<<endl;
    zapis<<"Posortowana: ";
    for(int i=0;i<30;i++)
    {
    tab[i]=(rand()%100)+1;
    cout <<" "<<tab[i];
    zapis<<" "<<tab[i];
    }
    return 0;
}
