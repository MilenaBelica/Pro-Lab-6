
#include <iostream>
using namespace std;

int a = 20;
int b = 10;
int obliczaniesumy(int a, int b);

int tab[10];
int rozmiar = 10;

int usun();

float TEMP1[10];
float TEMP2[10];
int INDEKS = 0;

int przelicz(float temp_podana, float temp_przeliczona);
int zapisz(float temp_podana, float temp_przeliczona);
int wyswietl();

int x = 0;

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

    //zadanie 3
    float temp_podana, temp_przeliczona = 0;

    for (int i = 0; ; i++) {
        cout << "Podaj temperature w stopniach C: ";
        cin >> temp_podana;

        przelicz(temp_podana, temp_przeliczona);
        zapisz(temp_podana, temp_przeliczona);
        TEMP1[i];
        TEMP2[i];

        if (i < 10) {
            INDEKS = i;
        }
    }

    wyswietl();
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

int przelicz(float temp_podana, float temp_przeliczona) {
    return temp_przeliczona = temp_podana + 273.15;
}
int zapisz(float temp_podana, float temp_przeliczona) {
    int x =+ 1;
    if (x >= 1 && x <= 10) {
        TEMP1[x] = temp_podana;
        TEMP2[x] = temp_przeliczona;
    }
    else {
        cout << "Koniec miejsca w tablicy, przeliczenie nie zostanie zapisane";
    }
    return TEMP1[x], TEMP2[x];
}
int wyswietl(){
    for(int i = 0; i <= INDEKS ; i++) {
        cout << i << ".    ";
        cout << TEMP1[i] << "C: "<< "\t";
        cout << TEMP2[i] << "K: "<< "\t";
}
    return 0;
}