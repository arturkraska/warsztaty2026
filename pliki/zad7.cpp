#include <bits/stdc++.h>
#include "biblioteka.h"

using namespace std;
 
/*********** 
 * Zadanie 7: Poniższe wywołanie funkcji `silnia(10)` wygeneruje 10 wywołań 
 * rekurencyjnych. Zanim się one skończą, ich argumenty (parametr `n`) oraz
 * adresy w kodzie, do których funkcja musi powrócić, będą przetrzymywane w
 * części pamięci zwanej stosem.
 * 
 * W ostatnim wywołaniu rekurencyjnym zostaje również wywołana funkcja 
 * `na_koniec()`. Użyj jej, aby wypisać zawartość stosu w momencie, gdy żadne 
 * wywołanie rekurencyjne nie jest zakończone. Może Ci się przydać funkcja 
 * `wypisz_pamiec_w_long_longach()`.
 * 
 * Następnie spróbuj zmodywikować zawartość stosu w funkcji `na_koniec()`.
 * Na początku podmień jeden ze znajdujących się tam argumentów na inną wartość. 
 * Czy wypisany wynik zmienił się adekwatnie do zmiany tej wartości?
 * Następnie spróbuj podmienić jeden z adresów powrotu tak, aby zamiast powrotu
 * do poprzedniego wywołania program przeskoczył pod adres funkcji `zla_funkcja()`. 
 * Czy się udało?
 ***********/

void zla_funkcja() {
	cout << "Weszliśmy do złej funkcji!!!" << '\n';
	exit(0);
}

void na_koniec(void* adr) {

	// Tutaj mozesz wpisywać swój kod

	
}

long long silnia(long long n) {
	if(n == 0) {
		na_koniec(&n);
		return 1;
	}
	return n * silnia(n-1);
}

int main() {
	wypisz(silnia(10));

	return 0;
}