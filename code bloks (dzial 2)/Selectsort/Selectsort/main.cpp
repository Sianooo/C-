#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int N;
void selectsort(int tab[])
{
    int temp;
    for(int i=0;i=N-1;i++)
    {
        int min=1;
        for(int j=i+1;j<N;j++)
        {
            if(tab[j]<tab[min])
            {
                min=j;
            }
        }
        temp=tab[i];
        tab[i]=tab[min];
        tab[min]=temp;
    }
}

int main()
{
          int n=10;
          int tab[n];
          srand(time(NULL));
          for(int i=0;i<n;i++)
          {
              tab[i]=rand()%10;
              cout<<tab[i]<<" ";
          }
          selectsort(tab);
          cout<<endl<<"Tablica posortowana"<<endl;
          for(int i=0;i<n;i++)
          {
              cout<<tab[i]<<" ";
          }

}
