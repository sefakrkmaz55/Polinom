//K�t�phane Deklerasyonu
#include "Polinom.h"//Polinom s�n�f�n�n tan�m�
#include <iostream>//cout ve cin kullan�m� i�in
#include <cmath>//matematik komutlar�(sqrt ve pow) kullan�m� i�in
#include <locale.h>//T�rk�e dil k�t�phanesi
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");//T�rk�e karakter kullan�m� i�in
	Polinom polinom;//polinom nesnesi olu�turup i�ine gerekli de�erleri atad�k 
	int  a, b, c, delta, katsayi;//De�i�ken deklarasyonu
	cout << "A de�erini giriniz:";//AX^2 li ifade i�in kullan�c�dan katsay� de�eri girmesini istiyoruz
	cin >> a;
	cout << "B de�erini giriniz:";//BX li ifade i�in kullan�c�dan katsay� de�eri girmesini istiyoruz
	cin >> b;
	cout << "C de�erini giriniz:";//C sabit say�s� i�in kullan�c�dan de�er istiyoruz
	cin >> c;

	polinom.KatsayilaraDegerAta(a, b, c);
	cout << "x i�in katsay� giriniz:";
	cin >> katsayi;
	cout << endl << "y= " << polinom.DegerHesapla(katsayi) << endl << endl;//Girilen de�erler ile polinomun de�erini hesaplat�p ekrana yazd�r�yoruz
	polinom.K�kleriHesapla();//Bulunan y de�eri ile diskrimant hesaplay�p delta durumunu inceleyen fonksiyonu polinom nesnesi ile �a��r�yoruz
	cout << endl;
	system("pause");//exe dosyas� hemen kapanmas�n diye yazar�z
	return 0;
}