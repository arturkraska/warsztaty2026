#include <bits/stdc++.h>

using namespace std;

void wypisz(string str);
void wypisz(char liczba);
void wypisz(short liczba);
void wypisz(int liczba);
void wypisz(long long liczba);
void wypisz(unsigned long liczba);
long long adres_na_liczbe(void* adr);
void wypisz_pamiec_w_bajtach(void* adres, int ile_bajtow);
void wypisz_pamiec_w_long_longach(void* adres, int ile_bajtów);
void zamien_bajt_pamieci(void* adres, int ktory_bajt, int wartość);