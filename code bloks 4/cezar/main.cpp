#include <iostream>
using namespace std;

string cezar(string a, int k)
{
    string szyfr = "";
    k = k % 26;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] + k > 122)
        {
            szyfr += a[i] - 26;
        }
        else
        {
            szyfr += a[i] + k;
        }
    }
    return szyfr;
}

string deszyfrowanie(string a, int k)
{
    string deszyfr = "";
    k = k % 26;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] - k < 97)
        {
            deszyfr += a[i] + 26;
        }
        else
        {
            deszyfr += a[i] - k;
        }
    }
    return deszyfr;
}

int main()
{
    string a;
    int k;
    cout << "Podaj zdanie: " << endl;
    cin >> a;
    cout << "Podaj klucz: " << endl;
    cin >> k;
    cout << "Slowo po zaszyfrowaniu: " << endl;
    cout << cezar(a, k) << endl;
    cout << "Slowo po deszyfrowaniu: " << deszyfrowanie(a, k) << endl;

    return 0;
}
