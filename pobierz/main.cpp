#include <iostream>

using namespace std;
    //pobierz od uzytkownita 3 zdania i zlicz ile w kazdym zdaniu jest spacji
int main() {
  int licznik_spacji = 0;
  string zdanie;

  // Pobieranie 3 zdañ od u¿ytkownika
  for (int i = 0; i < 3; i++) {
    cout << "Podaj zdanie nr " << ": ";
    getline(cin, zdanie);

    // Liczenie spacji w zdaniu
    for (int j = 0; j < zdanie.length(); j++) {
      if (zdanie[j] == ' ') {
        licznik_spacji++;
      }
    }

    // Wyœwietlanie liczby spacji
    cout << "Liczba spacji w zdaniu nr " <<i +1 << ": " << licznik_spacji << endl;

    // Resetowanie licznika spacji przed kolejnym zdaniem
    licznik_spacji = 0;
  }

  return 0;
}
