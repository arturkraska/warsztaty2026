#include <bits/stdc++.h>

using namespace std;

void wypisz(string str);
void wypisz(char liczba);
void wypisz(short liczba);
void wypisz(int liczba);
void wypisz(long long liczba);
void wypisz(unsigned long liczba);
void wczytaj(long long &zmienna);
long long adres_na_liczbe(void* adr);
void wypisz_pamiec_w_bajtach(void* adres, int ile_bajtow);
void wypisz_pamiec_w_long_longach(void* adres, int ile_bajtów);
void zamien_bajt_pamieci(long long adres, int wartosc);
bool zamien_bajt_pamieci_zmieniajac_uprawnienia_dostepu(long long adres, char wartosc);
void podpowiedz_do_ataku(void* adr);