//S�n�f�n y�r�t�c� dosyas�n� olu�turup istenilen i�lemleri yapt�rd�k

//K�t�phane Deklerasyonu
#include "Polinom.h"//Polinom s�n�f�n�n tan�m�
#include <iostream>//cout ve cin kullan�m� i�in
#include <cmath>//matematik komutlar�(sqrt ve pow) kullan�m� i�in
using namespace std;
//Fonksiyon Tan�mlar�
Polinom::Polinom() {
	int a = b = c = 0;
}
void Polinom::KatsayilaraDegerAta(int a1, int b1, int c1) {
	a = a1;
	b = b1;
	c = c1;
}

int Polinom::DegerHesapla(int katsayi) {
	x = katsayi;
	int y = a * pow(x, 2) + b * x + c;
	return y;
}

void Polinom::K�kleriHesapla() {
	delta = (b * b) - (4 * a * c);
	if (delta == 0) {
		cout << "Denklemin birbirine e�it iki tane reel k�k� vard�r.\n";
		kok1 = (-1 * b) / (2 * a);
		kok2 = kok1;
		cout << "\n K�kler=" << kok1 << " ve " << kok2;
	}
	if (delta > 0) {
		cout << "Denklemin iki tane farkl� reel k�k� vard�r.\n";
		kok1 = ((-1 * b) + sqrt(delta)) / (2 * a);
		kok2 = ((-1 * b) - sqrt(delta)) / (2 * a);
		cout << "\n K�kler " << kok1 << " ve " << kok2;
	}
	if (delta < 0) {
		cout << "Denklemin k�kleri sanald�r.\n";
		kok1 = (-1 * b) / (2 * a);
		kok2 = (sqrt(-1 * delta)) / (2 * a);
		cout << "\n K�kler " << kok1 << " +i " << kok2 << " ve " << kok1 << " -i " << kok2 << endl;
	}
}