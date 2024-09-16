#include <iostream>

using namespace std;
string odwroc(string a)
{
    string slowo="";
    for(int i=a.length()-1;i>=0;i--)
    {
        slowo+=a[i];
    }
    return slowo;
}

string szyfr(string a,int k)
{
    string slowo="";
    string slowo2="";
    string wynik;
    for(int i=0;i<a.length()/2;i++)
    {
        slowo+=a[i];
    }
    for(int i=a.length()/2;i<a.length();i++)
    {
        slowo2+=a[i];
    }
    slowo=odwroc(slowo);
    slowo2=odwroc(slowo2);
    wynik=slowo+slowo2;

    return wynik;
}

int main()
{
    cout<<szyfr("kaloryfer",0)<<endl;
    cout<<odwroc("kaloryfer")<<endl;
    return 0;
}
