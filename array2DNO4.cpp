#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int produk[2][4];
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			if(i==0){
				cout << "\n\tJumlah Pelampung yang disewa pada minggu ke-" << j+1 << " adalah : ";	
			}else {
				cout << "\n\tJumlah Perahu karet yang disewa pada minggu ke-" << j+1 << " adalah : ";	
			}
			cin >> produk[i][j];
		}
	}
	int counter =0;
	int total = 0;
	cout << "\n\t======================================================================================\n\t";
	cout << "|            |";
	for(int i=1;i<=4;i++){
		cout << "  Minggu " << i << " |";
	}
	cout << "  Total Pendapatan   |";
	cout << "\n\t======================================================================================\n";
	for(int i=0;i<2;i++){
		if(i==0){
				cout << "\t|Pelampung   |";				
			}else {
				cout << "\t|Perahu Karet|";
			}
		for(int j=0;j<4;j++){
			cout << setw(5) << produk[i][j] << setw(7) << "|  ";
			if(i==0){
				counter = counter +(produk[i][j]*10000);	
			}
			else{
				counter = counter +(produk[i][j]*25000);	
			}
			
		}
		total = total + counter;
		cout << setw(5) << counter << setw(5);
		counter = 0;
		cout << endl;
	}
	cout << "\t======================================================================================\n";
	cout << "\t|                                                |    Total =|  " << total;
}
