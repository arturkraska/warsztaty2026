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
	cout << (unsigned long long) liczba << '\n';
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

void zamien_bajt_pamieci_zmieniajac_uprawnienia_dostepu(long long adres, char wartosc) {
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
