#include <iostream>
using namespace std;

int main(){
	int angka;

	cout << "Masukan angka   = ";
	cin >> angka;
	
	
	switch(angka){
		case 1:
			cout << "SATU\n";
			break;
		case 2:
			cout << "DUA\n";
			break;
		case 3:
			cout << "TIGA\n";
			break;
		case 4:
			cout << "EMPAT\n";
			break;
		default:
			cout << "Anda Salah memasukan Input Kode\n";
	}
	
	return 0;
}
