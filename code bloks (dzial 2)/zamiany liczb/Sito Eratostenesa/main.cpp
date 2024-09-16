#include <iostream>

using namespace std;
void sito (int n)
{
    int tab[n+1];
    for(int i=0;i<=n;i++)
    {
        tab[i]=1;
    }
        for(int k=2;k*k<=n;k++)
        {
            for(int i=k+1;i<=n;i++)
            {
                if(i%k==0)
                {
                    tab[i]=0;
                }
            }
        }

    for(int i=2;i<=n;i++)
    {
        if(tab[i]==1)
        {
            cout<<i<<" ";
        }
    }
    }

int main()
{
    int n=10;
    sito(n);

    return 0;
}
