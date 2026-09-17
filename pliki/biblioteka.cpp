#include <bits/stdc++.h>

using namespace std;

void wypisz(string str) {
    cout << str << '\n';
}

void wypisz(char liczba) {
    cout << (int)(unsigned char) liczba << '\n';
}

void wypisz(short liczba) {
    cout << (unsigned short) liczba << '\n';
}

void wypisz(int liczba) {
    cout << (unsigned int) liczba << '\n';
}

void wypisz(long long liczba) {
    cout << (unsigned long long) liczba << '\n';
}

void wypisz(unsigned long liczba) {
    cout << (unsigned long long) liczba << '\n';
}

long long adres_na_liczbe(void* adr) {
    return (long long) adr;
}

void wypisz_pamiec_w_bajtach(void* adres, int ile_bajtow) {
    char* adr = (char*)adres;
    cout << "Zawartość " << ile_bajtow << " bajtów od " << (long long) adres << ":";
    for(int i = 0; i < ile_bajtow; i++) {
        if(i % 8 == 0) {
            cout << "\n" << (long long) adr << ":";
        }
        cout << " " << setw(4) << (int)(unsigned char)*(adr);
        adr++;
    }
    cout << '\n';
}

void wypisz_pamiec_w_long_longach(void* adres, int ile_liczb) {
    long long* adr = (long long*)adres;
    cout << "Zawartość " << ile_liczb << " bajtów od " << (long long) adres << ":";
    for(int i = 0; i < ile_liczb; i++) {
        if(i % 4 == 0) {
            cout << "\n" << (long long) adr << ":";
        }
        cout << " " << setw(20) << (unsigned long long)*(adr);
        adr++;
    }
    cout << '\n';
}

void zamien_bajt_pamieci(void* adres, int ktory_bajt, int wartość) {
    char* adr = (char*) adres;
    *(adr + ktory_bajt) = wartość;
}
