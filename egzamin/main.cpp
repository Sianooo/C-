#include <iostream>
#include <fstream>

using namespace std;
bool ostatniZnak(string a)
{
    if(a[a.length()-1]=='A')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool czyZawiera(string a , string b)
{
    int i=0;
    if(a.length()<=b.length())
    {
            for(int j=0;j<b.length();j++)
            {
                if(a[i]==b[j])
                {
                    i++;
                }
            }
            cout<<i<<endl;
            if(i==a.length())
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    else
    {
        return false;
    }
}
int main()
{
    /*
     string a;
     cout<<"Podaj wyraz: ";
     cin>>a;
     if(ostatniZnak(a)==true)
     {
         cout<<"A na koncu jest: "<<a<<endl;
     }
     else
     {
         cout<<"Nie ma liter A: "<<endl;
     }
     */

     int licznik=0;
     int z=0;
     string a,b;
     ifstream odczyt("slowa.txt");
     for(int i=0;i<1000;i++)
     {
         odczyt>>a;
         odczyt>>b;
         cout<<a<<" "<<b<<endl;
         if(czyZawiera(a,b)==true)
         {
             z++;
         }
         if(ostatniZnak(a)==true)
         {
             licznik++;
         }
           if(ostatniZnak(b)==true)
         {
             licznik++;
         }
     }
     cout<<"Wyrazow na litere A na koncu: "<<licznik<<endl;
     cout<<"Wyrazow jest :"<<czyZawiera("ALA","KALAFIOR")<<endl;
     cout<<"Par jest :"<<z<<endl;



    return 0;
}
