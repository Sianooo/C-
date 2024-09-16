#include <iostream>

using namespace std;
bool lparzyste(int a)
{
    if(a%2==0)
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
    int a;
    cin>>a;
    if(lparzyste(a)==true)
    cout<<"parzysta";
    else
    cout<<"nieparzysta";
    return 0;
}
