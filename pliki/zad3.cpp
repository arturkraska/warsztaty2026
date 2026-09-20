#include <bits/stdc++.h>
#include "biblioteka.h"

using namespace std;
 
/*********** 
 * Zadanie 3: Poniżej znajduje się struktura zawierająca pewne tablice i zmienną.
 * Dana jest funkcja `quiz()`, która wypełnia jej komórki, a następnie wypisuje
 * niektóre z nich. Oblicz ręcznie jakie wartości wypisze ta funkcja. Następnie
 * sprawdź poprawność swoich wyników uruchamiając funkcję `quiz()` w `main()`.
 ***********/

struct pamiec {
	int tab[3][4][5];
	int zmienna;
	int tab2[10];
};
pamiec p;

void quiz() {

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++)
			for(int k = 0; k < 5; k++)
				p.tab[i][j][k] = (i+1)*(j+1)*(k+1);

	p.zmienna = 100;

	for(int i = 0; i < 10; i++)
		p.tab2[i] = 1000 + i;

	wypisz(p.tab[0][0][0]);
	wypisz(p.tab[1][1][1]);
	wypisz(p.tab[2][3][4]);
	
	wypisz(p.tab[3][0][0]);
	wypisz(p.tab[2][3][5]);
	wypisz(p.tab[2][3][6]);
	wypisz(p.tab[0][0][25]);
	wypisz(p.tab[1][-1][5]);
	wypisz(p.tab[3][0][-1]);

	wypisz(p.tab2[3]);
	wypisz(p.tab2[-1]);
	wypisz(p.tab2[-2]);
	wypisz(p.tab2[-61]);
}

int main() {

	// Jak wyliczysz wszystkie odpowiedzi, to usuń komentarz z kolejnej linijki
	// quiz();

	return 0;
}