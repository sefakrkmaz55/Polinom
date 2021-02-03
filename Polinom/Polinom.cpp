//Sýnýfýn yürütücü dosyasýný oluþturup istenilen iþlemleri yaptýrdýk

//Kütüphane Deklerasyonu
#include "Polinom.h"//Polinom sýnýfýnýn tanýmý
#include <iostream>//cout ve cin kullanýmý için
#include <cmath>//matematik komutlarý(sqrt ve pow) kullanýmý için
using namespace std;
//Fonksiyon Tanýmlarý
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

void Polinom::KökleriHesapla() {
	delta = (b * b) - (4 * a * c);
	if (delta == 0) {
		cout << "Denklemin birbirine eþit iki tane reel kökü vardýr.\n";
		kok1 = (-1 * b) / (2 * a);
		kok2 = kok1;
		cout << "\n Kökler=" << kok1 << " ve " << kok2;
	}
	if (delta > 0) {
		cout << "Denklemin iki tane farklý reel kökü vardýr.\n";
		kok1 = ((-1 * b) + sqrt(delta)) / (2 * a);
		kok2 = ((-1 * b) - sqrt(delta)) / (2 * a);
		cout << "\n Kökler " << kok1 << " ve " << kok2;
	}
	if (delta < 0) {
		cout << "Denklemin kökleri sanaldýr.\n";
		kok1 = (-1 * b) / (2 * a);
		kok2 = (sqrt(-1 * delta)) / (2 * a);
		cout << "\n Kökler " << kok1 << " +i " << kok2 << " ve " << kok1 << " -i " << kok2 << endl;
	}
}