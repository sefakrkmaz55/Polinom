//Polinom s�n�f�n� olu�turup public ve private olmak �zere de�i�ken ve fonksiyonlar� deklare ettik

#include <iostream>
#include <cmath>	
class Polinom
{
public:
	Polinom();//Yap�c� Fonks.
	void KatsayilaraDegerAta(int, int, int);//DegerAta fonk. prototip
	int DegerHesapla(int);//DegerHesapla Fonk. prototip
	void K�kleriHesapla();//K�kleriHesapla Fonk. prototip 
private:
	int a, b, c, delta, x;
	float kok1, kok2;//K�kler her zaman tam say� ��kmaz bu y�zden float olarak tan�mlamam�z daha mant�kl� olur
};
