#include <iostream>

using namespace std;
bool palindrom(string a)
{
    int d=a.length();
    for(int i=0,j=d-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            return false;
        }
    }
    return true;
}
string najdluzszy_Palindrom(string a)
{
    string wyraz="";
    for(int k=0;k<a.length();k++)
    {
    wyraz="";
    for(int i=0;i<a.length()-k;i++)
    {
        wyraz+=a[i];
    }
    if(palindrom(wyraz)==true)
    {
        return wyraz;
    }
    }
}
string odwroc(string a)
{
    string slowo="";
    for(int i=a.length()-1;i>=0;i--)
    {
        slowo+=a[i];
    }
    return slowo;
}

int main()
{
   //cout<<palindrom("kajak");
   cout<<najdluzszy_Palindrom("kajakarstwo");

    return 0;
}
