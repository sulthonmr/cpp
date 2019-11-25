#include <iostream>
using namespace std;

int main(){
	int angka[10],max,min;
	
	for(int i=0;i<10;i++){
		cout << "Masukan angka ke-" << i+1 << " : ";
		cin >> angka[i];
		if(angka[i]==0)
		{
			max=angka[i];
			min=angka[i];
		}else if(min >angka[i]){
			min = angka[i];
		}
		else if(max<angka[i]){
			max=angka[i];
		}
	}
	
	cout << "Angka terbesar = " << max << endl;
	cout << "Angka terkecil = " << min;


	return 0;
}

