#include <iostream>
using namespace std;

int main(){
	int bil1,bil2,bil3;

	cout << "Masukan bilangan ke-1 = ";
	cin >> bil1;
	cout << "Masukan bilangan ke-2 = ";
	cin >> bil2;
	cout << "Masukan bilangan ke-3 = ";
	cin >> bil3;
	cout << endl;
	
	if((bil1>bil2) && (bil2>bil3)){
		cout << "Bilangan terbesar adalah : " << bil1 << endl;
		cout << "Bilangan terkecil adalah : " << bil3 << endl << endl;
		if(bil1>=0){
			cout << "Bilangan terbesar adalah positif" << endl;
		} else {
			cout << "Bilangan terbesar adalah negatif" << endl;
		}
	} else if((bil1>bil3)&&(bil3>bil2)){
		cout << "Bilangan terbesar adalah : " << bil1 << endl;
		cout << "Bilangan terkecil adalah : " << bil2 << endl;
		if(bil1>=0){
			cout << "Bilangan terbesar adalah positif" << endl;
		} else {
			cout << "Bilangan terbesar adalah negatif" << endl;
		}
	} else if((bil2>bil1)&&(bil1>bil3)){
		cout << "Bilangan terbesar adalah : " << bil2 << endl;
		cout << "Bilangan terkecil adalah : " << bil3 << endl;
		if(bil2>=0){
			cout << "Bilangan terbesar adalah positif" << endl;
		} else {
			cout << "Bilangan terbesar adalah negatif" << endl;
		}
	} else if((bil2>bil3)&&(bil3>bil1)){
		cout << "Bilangan terbesar adalah : " << bil2 << endl;
		cout << "Bilangan terkecil adalah : " << bil1 << endl;
		if(bil2>=0){
			cout << "Bilangan terbesar adalah positif" << endl;
		} else {
			cout << "Bilangan terbesar adalah negatif" << endl;
		}
	} else if((bil3>bil1)&&(bil1>bil2)){
		cout << "Bilangan terbesar adalah : " << bil3 << endl;
		cout << "Bilangan terkecil adalah : " << bil2 << endl;
		if(bil3>=0){
			cout << "Bilangan terbesar adalah positif" << endl;
		} else {
			cout << "Bilangan terbesar adalah negatif" << endl;
		}
	} else if((bil3>bil2)&&(bil2>bil1)){
		cout << "Bilangan terbesar adalah : " << bil3 << endl;
		cout << "Bilangan terkecil adalah : " << bil1 << endl;
		if(bil3>=0){
			cout << "Bilangan terbesar adalah positif" << endl;
		} else {
			cout << "Bilangan terbesar adalah negatif" << endl;
		}
	}

	
	return 0;
}
