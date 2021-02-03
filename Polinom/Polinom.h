//Polinom sýnýfýný oluþturup public ve private olmak üzere deðiþken ve fonksiyonlarý deklare ettik

#include <iostream>
#include <cmath>	
class Polinom
{
public:
	Polinom();//Yapýcý Fonks.
	void KatsayilaraDegerAta(int, int, int);//DegerAta fonk. prototip
	int DegerHesapla(int);//DegerHesapla Fonk. prototip
	void KökleriHesapla();//KökleriHesapla Fonk. prototip 
private:
	int a, b, c, delta, x;
	float kok1, kok2;//Kökler her zaman tam sayý çýkmaz bu yüzden float olarak tanýmlamamýz daha mantýklý olur
};
