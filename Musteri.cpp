#include <iostream>
#include <queue>

using namespace std;

class Musteri{
	string ad;
	int adet;
	public:
		Musteri(string ad, int adet): ad(ad), adet(adet) {	}
		friend ostream & operator<<(ostream&,Musteri&);
		
};
ostream& operator<<(ostream&o,Musteri&m){
	o<<m.ad<< " " << m.adet << "pide almak istiyor";
	return o;
}
int main() {
	Musteri m("Arif",3);
    cout << m;
	
	return 0;
	
}

