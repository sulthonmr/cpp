#include <iostream>
using namespace std;

int main(){
	int n; ;
	int a=1;
	int total=0;
	float rata_rata;
	
	cout << "Masukan banyak bilangan yang akan diinput : ";
	cin >> n;
	int data[n];
	
	for(int i=0;i<n;i++){	
		cout << "Bilangan ke-" << a++ << " : ";
		cin >> data[i];
	}
	
	for(int i=0;i<n;i++){			
		total+= data[i];
	}
	rata_rata = total / n;
	
	cout << "Rata-rata : " << rata_rata;


	return 0;
}

