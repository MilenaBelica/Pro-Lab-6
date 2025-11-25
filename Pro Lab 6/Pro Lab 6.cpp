
#include <iostream>
using namespace std;

int a = 20;
int b = 10;
int obliczaniesumy(int a, int b);

int tab[10];
int rozmiar = 10;

int usun();

int main()
{
    //zadanie 1
    int suma;
    suma = obliczaniesumy(a, b);
    cout << suma << endl;;

    int a = 1;
    int b = 2;
    int sumalokalnych;

    sumalokalnych = obliczaniesumy(a, b);
    cout << sumalokalnych << endl;

    //zadanie 2
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe dla komorki tablicy nr. " << i << "\t";
        cin >> tab[i];
    }
    usun();

    for (int x = 0; x < 9; x++) {
        cout << tab[x] << ", ";
    }

}


int obliczaniesumy(int a, int b) {
    return a + b;
}
int usun() {
    int usuwanawartosc;
    cout << "Podaj ktora pozycje w tabeli <0,9> chcesz usunac? ";
    cin >> usuwanawartosc;
    for (int i = usuwanawartosc; i < 9; i++) {

        tab[i] = tab[i + 1];
    }
        
    tab[9] = 0;
        
    rozmiar--;
    return tab[rozmiar];
}