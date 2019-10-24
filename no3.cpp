#include <iostream>
using namespace std;

int main(){
	int bil1,bil2;

	cout << "Masukan bilangan pertama   = ";
	cin >> bil1;
	cout << "Masukan bilangan kedua     = ";
	cin >> bil2;
	
	if(bil1>bil2){
		cout << "Bilangan terbesarnya ialah " << bil1 << endl;
	} else if(bil2>bil1){
		cout << "Bilangan terbesarnya ialah " << bil2 << endl;
	} else {
		cout << "Kedua bilangan bernilai sama" << endl;
	}
	
	return 0;
}
