#include <bits/stdc++.h>
#include "biblioteka.h"

using namespace std;
 
/*********** 
 * Zadanie 5: Policz ile miejsca powinna zawierać zmienna typu `samochod`.
 * Następnie stwórz taką zmienną i sprawdz jej rozmiar funkcją `sizeof()`. 
 * Czy wartości te są takie same?
 * 
 * Spróbuj sprawdzić jak bardzo oddalone są pola tej struktury od jej początku.
 * Można to zrobić na dwa sposoby:
 * - wypełniając strukturę w wybrany, charakterystyczny sposób, po czym wypisując
 *   jej zawartość funkcją `wypisz_pamiec_w_bajtach()`,
 * - licząc różnicę danego pola od początku struktury, używając funkcji 
 *   `adres_na_liczbe()`, po czym odejmując od siebie dane adresy.
 * 
 * Okazuje się, że zmianieając kolejność pól w strukturze możemy zamienić jej rozmiar. 
 * Spróbuj wydedukować dlaczego pomiędzy niektórymi jej polami są "dziury", a 
 * następnie spróbuj znaleźć takie ułożenie, które zminimalizuje jej rozmiar. 
 ***********/

struct samochod {
	char kolor;
	long long cena;
	char pojemność_baku;
	long long spalanie;
	char liczba_siedzeń;
	int przebieg;
	char wersja;
};
samochod s;

int main() {

	// Tutaj możesz pisać swój kod

	s.kolor = 1;
	s.cena = 2;
	s.pojemność_baku = 3;
	s.spalanie = 4;
	s.liczba_siedzeń = 5;
	s.przebieg = 6;
	s.wersja = 7;

	


	return 0;
}