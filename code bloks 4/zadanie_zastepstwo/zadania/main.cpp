#include <iostream>

using namespace std;
string szyfruj_Wyrazy(string a)
{
    for(int i=1;i<a.length();i+=2)
    {
        char temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
    }
    return a;
}

int main()
{
    cout<<szyfruj_Wyrazy("monitor")<<endl;
    return 0;
}
