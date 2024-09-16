#include <iostream>

using namespace std;
string bubblesort(string a)
{
    char temp;
    int n=a.length();
    for(int k=1;k<n;k++)
    {
        for(i=0;i<n-k;i++)
        {
           if(a[i]>a[i+1])
           {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
           }
        }
    }
    return a;
}
bool czyAnagram(string a,string b)
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
    string a,b;
    cout<<"Wprowadz 1 zdanie: "<<endl;
    cin>>a;
    cout<<"Wprowadz 2 zdanie: "<<endl;
    cin>>b;

    if(czyAnagram(a,b))
    {
        cout<<"Sa anagramami";
    }
    else
    {
        cout<<"Nie sa anagramami";
    }

    return 0;
}
