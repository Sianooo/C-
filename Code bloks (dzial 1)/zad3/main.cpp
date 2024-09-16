#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
//Zad_3
//losowanie 2 licbzy <10;50> i wyznacz ich nwd

using namespace std;
int NWD(int a,int b)
{
  while(a!=b)
  {
    if(a<b)
    {
        a=a-b;
    }
    else{
        b=b-a;
    }
  }
  return a;
}


int main()
{
    int a;
    int b;
    srand(time(NULL));
    a=rand()%41+10;//przedzial <10;50>
    b=rand()%41+10;
    cout<<"NWD"<<a<<","<<b<<" wynosi--->"<<NWD(a,b);
    return 0;
}
