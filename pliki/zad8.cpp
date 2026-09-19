#include <bits/stdc++.h>
#include "biblioteka.h"

using namespace std;

/*********** 
 * Zadanie 8: Poniżej znajduje się prosta funkcja, która wczytuje z wejścia n liczb,
 * po czym wypisuje ich sumę.
 * Co się stanie, jeśli podasz tej funkcji 3 liczby?
 * Co się stanie, jeśli podasz tej funkcji 12 liczb?
 * Co się stanie, jeśli dwunasta liczba (licząc od 1) będzie równa 4199392?
 * 
 * Poniższy kod ma wyłączone kilka zabezpieczeń, między innymi:
 * - kod znajduje się zawsze pod tym samym adresem,
 * - wyłączone jest zabezpieczenie stosu w postaci tzw. kanarków,
 * - gdyby kod znajdował się na stosie, można go wykonać.
 * 
 * Użyj funkcji `podpowiedz_do_ataku()`, która wypisuje propozycję liczb do wpisania, 
 * po czym podaj je do programu. Co się wtedy stanie?
 ***********/

void ups() {
	wypisz("Ups, zła funkcja! :O");
	exit(0);
}

void policz_sume() {
	long long n, suma = 0, tab[4];

	// Później usuń komentarz z poniższego wywołania funkcji
	// podpowiedz_do_ataku(tab);

	wypisz("Podaj liczbę n, a następnie n liczb:");
	wczytaj(n);
	for(int i = 0; i < n; i++) {
		wczytaj(tab[i]);
		suma += tab[i];
	}
	wypisz("Suma to:");
	wypisz(suma);
	return;
}

int main() {
	policz_sume();

	return 0;
}