#include <bits/stdc++.h>
#include "biblioteka.h"

using namespace std;
 
/*********** 
 * Zadanie 8: Stack attack
 ***********/

void zla_funkcja() {
	system("nyancat");
	exit(0);
}

void policz_sume() {
	long long n, suma = 0, tab[4];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> tab[i];
		suma += tab[i];
	}
	cout << "suma to " << suma << '\n';
	return;
}

int main() {

	wypisz(adres_na_liczbe((void*) &zla_funkcja));

	policz_sume();

	return 0;
}