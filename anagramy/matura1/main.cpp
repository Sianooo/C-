#include <iostream>
#include <fstream>

using namespace std;
string bubblesort(string a)
{
    char temp;
    int n=a.length();
    for(int k=1;k<n;k++)
    {
        for(int i=0;i<n-k;i++)
        {
            if(a[i]>a[i=1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    return a;
}

bool czyAnagram(string a, string b)
{
    a=bubblesort(a);
    b=bubblesort(b);
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ifstream odczyt("anagram.txt");
    ofstream zapis("odp_4a.txt");
    ofstream zapis2("odp_4b.txt");

    string tab[5];
    int temp;
    string temp2;
    int z=0;
    int z2=0;

    for(int i=0;i<200;i++)
    {
        for(int j=0;j<5;j++)
        {
             odczyt>>tab[j];
             cout<<tab[j]<<" ";
             temp=tab[0].length();
             temp2=tab[0];
             if(tab[j].length()==temp)
             {
                 z=z+1;
             }
             if(czyAnagram(temp2,tab[j]))
             {
                 z2++;
             }
             if(z2==5)
             {
                 for(int j=0;j<5;j++)
                 {
                     zapis2<<tab[j]<<" ";
                 }
             }

        if(z==5)
        {
            for(int j=0;j<5;j++)
            {
                zapis<<tab[j]<<" ";
            }
            zapis<<endl;
            zapis2<<endl;
        }
              cout<<endl;
              z=0;
              z2=0;

    return 0;
}}}

