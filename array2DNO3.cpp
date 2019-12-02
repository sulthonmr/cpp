#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int prodi[2][5];
	string bulan[5]={"April","Mei","Juni","Juli","Agustus"};
	
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			if(i==0){
				cout << "\n\tPendaftar yang memilih 1 Prodi di bulan " << bulan[j] << " adalah : ";	
			}else {
				cout << "\n\tPendaftar yang memilih 2 Prodi di bulan " << bulan[j] << " adalah : ";	
			}
			cin >> prodi[i][j];
		}
	}
	int counter =0;
	int total = 0;
	cout << "\n\t==========================================================================\n\t";
	cout << "|          |";
	for(int i=0;i<5;i++){
		if(i==4){
		cout << setw(5) << bulan[i] << "|";	
		}else {
		cout << setw(5) << bulan[i] << setw(3) << "|";
		}
	}
	cout << "  Total Penerimaan   |";
	cout << "\n\t==========================================================================\n";
	for(int i=0;i<2;i++){
		if(i==0){
				cout << "\t| 1 Prodi  |";				
			}else {
				cout << "\t| 2 Prodi  |";
			}
		for(int j=0;j<5;j++){
			cout << setw(3) << prodi[i][j] << setw(5) << "|";
			counter += prodi[i][j];
			total += prodi[i][j];
		}
		cout << setw(5) << counter << setw(5);
		counter = 0;
		cout << endl;
	}
	cout << "\t==========================================================================\n";
	cout << "\t|                                          |Total =|   " << total;
}
