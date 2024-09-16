#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string szyfrowanie(string tekst) {
    int d=tekst.length();
    int w=ceil(sqrt(d));
    char tab[w][w];
    for(int i=0;i<=d-1;i++) {
        if(tekst[i]==' ') {
            tekst[i]='_';
        }
    }
    cout<<tekst<<endl;
    int k=0;
    for(int x=0;x<w;x++) {
        for(int y=0;y<w;y++) {
                if(k>=d) {
                    tab[x][y]='_';
                    k++;
                } else {
                    tab[x][y]=tekst[k];
                    k++;
                }
            }
        }
        string szyfr="";
        for(int z=0;z<w;z++) {
            for(int c=0;c<w;c++) {
                szyfr+=tab[c][z];
            }
        }
    return szyfr;
}

int main()
{
    string a,b;
    cout<<"Cytat:"<<endl;
    getline(cin,a);
    b=szyfrowanie(a);
    cout<<b<<endl;
    return 0;
}
