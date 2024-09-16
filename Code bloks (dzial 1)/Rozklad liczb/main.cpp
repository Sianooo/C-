#include <iostream>

using namespace std;

void rozklad(int a)
{
    int d=2;
    while(a>=d)
    {
    if(a%d==0)
    {
        cout<<d<<endl;
    a=a/d;
    }
    else{
       d+=1;
    }

    }
}

int main()
{
    int x,y;
    cout<<"Podaj liczby"<<endl;
    cin>>x;
    cin>>y;
    cout<<rozklad;
    return 0;
}
