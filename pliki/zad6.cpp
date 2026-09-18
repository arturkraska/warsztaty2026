#include <bits/stdc++.h>
#include "biblioteka.h"

using namespace std;
 
/*********** 
 * Zadanie 6: Poniżej znajduje się funkcja `odejmij()`. Jej kod, przetłumaczony
 * na ciąg (trudnych do zrozumienia) bajtów również znajduje się w pamięci.
 * Spróbuj go wypisać za pomocą funkcji `wypisz_pamiec_w_bajtach()`.
 * 
 * Czy jesteś w stanie zamienić tą funkcję na dodawanie?? 
 * W funkcji `main()` są wczytywane z wejścia dwie liczby, oraz dwukrotnie została 
 * wywołana funkcja `odejmij()`. Znajdź bajt, który należy zamienić na inną wartość 
 * i spróbuj zrobić to za pomocą funkcji `zamien_bajt_pamieci(adres, wartosc)`. 
 * Oba argumenty niech będą liczbami long long.
 * Jaki jest efekt?
 * 
 * Wskazówki:
 * - ciąg bajtów `72 41 240` z dużą szansą oznacza odejmowanie,
 * - ciąg bajtów `72 1 240` z dużą szansą oznacza dodawanie,
 * - bajt `195` może oznaczać koniec funkcji.
 * 
 * Czy uda Ci się osiągnąć lepszy efekt za pomocą funkcji 
 * `zamien_bajt_pamieci_zmieniajac_uprawnienia_dostepu(adres, wartosc)`? ;)
 ***********/

long long odejmij(long long a, long long b) {
	return a - b;
}

int main() {

	// Tutaj spróbuj wypisać kod funkcji `odejmij` w bajtach

	


	// Wczytujemy z wejścia dwie liczby, które będzie odejmować
	long long a, b; 
	wypisz("Podaj dwie liczby: a, b:");
	wczytaj(a);
	wczytaj(b);

	wypisz("Przed modyfikacjami różnica to:");
	cout << odejmij(a, b) << '\n';

	// Tutaj spróbuj zmodyfikować odpowiedni bajt pamięci, aby zamienić 
	// odejmowanie na dodawanie

	
	


	wypisz("Po modyfikacjach różnica to:");
	cout << odejmij(a, b) << '\n';

	return 0;
}