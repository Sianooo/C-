#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

float PI ()
{
double ikw=10000000;
double iko=0;
int i;
float x,y;
for(i=1;i<=ikw;i++)//tworzymy funkcje
{
x = ((float)rand()/RAND_MAX)*(1-0)+0;//nowe wzory!
y = ((float)rand()/RAND_MAX)*(1-0)+0;
if(x*x+y*y<=1)
{
iko+=1;

}
}
float pi;
pi = (4*iko)*ikw;
return pi;
}


int main()
{
    float x,y,alfa,pi=PI();
    x=0;
    y=0;
    srand(time(NULL));
    ofstream zapis("punkty1.xls");
    for(int i=1;i<=51;i++)
    {
        zapis<<x<<"\t"<<y<<endl;//wysy³anie do pliku
       // alfa = (float) rand()/RAND_MAX; -----> przedzia³ od 0-1
       alfa = ((float) rand()/RAND_MAX)*2*pi;//losowanie kata alfa
       x = x+cos(alfa);
       y = y+sin(alfa);

    }
    zapis.close();

    return 0;
}
