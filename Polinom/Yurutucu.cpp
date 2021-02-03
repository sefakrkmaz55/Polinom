//Kütüphane Deklerasyonu
#include "Polinom.h"//Polinom sýnýfýnýn tanýmý
#include <iostream>//cout ve cin kullanýmý için
#include <cmath>//matematik komutlarý(sqrt ve pow) kullanýmý için
#include <locale.h>//Türkçe dil kütüphanesi
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");//Türkçe karakter kullanýmý için
	Polinom polinom;//polinom nesnesi oluþturup içine gerekli deðerleri atadýk 
	int  a, b, c, delta, katsayi;//Deðiþken deklarasyonu
	cout << "A deðerini giriniz:";//AX^2 li ifade için kullanýcýdan katsayý deðeri girmesini istiyoruz
	cin >> a;
	cout << "B deðerini giriniz:";//BX li ifade için kullanýcýdan katsayý deðeri girmesini istiyoruz
	cin >> b;
	cout << "C deðerini giriniz:";//C sabit sayýsý için kullanýcýdan deðer istiyoruz
	cin >> c;

	polinom.KatsayilaraDegerAta(a, b, c);
	cout << "x için katsayý giriniz:";
	cin >> katsayi;
	cout << endl << "y= " << polinom.DegerHesapla(katsayi) << endl << endl;//Girilen deðerler ile polinomun deðerini hesaplatýp ekrana yazdýrýyoruz
	polinom.KökleriHesapla();//Bulunan y deðeri ile diskrimant hesaplayýp delta durumunu inceleyen fonksiyonu polinom nesnesi ile çaðýrýyoruz
	cout << endl;
	system("pause");//exe dosyasý hemen kapanmasýn diye yazarýz
	return 0;
}