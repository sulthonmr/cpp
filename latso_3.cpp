#include <iostream>
using namespace std;

int main(){
	int nilai[5]={90,70,75,50,47};
	int lulus = 0,tidaklulus=0;
	string nama[5]={"Ardhia","Bunga","Dodo","Edma","Parto"};
	cout << endl << endl;
	cout <<"\tDaftar Kelulusan Mahasiswa" << endl << endl;
	cout <<"\tNo";
	cout <<"\tNama";
	cout <<"\tNilai";
	cout <<"\tKeterangan";
	cout << endl;
	for(int i=0;i<5;i++){
		cout << "\t" << i+1;
		cout << "\t" << nama[i];
		cout << "\t" << nilai[i];
		if(nilai[i]>=60){
			cout << "\tLulus";
			lulus += 1;
		} else {
			cout << "\tTidak Lulus";
			tidaklulus += 1;
		}
		cout << endl;
	}
	cout << endl<<endl;
	cout <<"\tJumlah Mahasiswa yang lulus       = " <<lulus << endl;
    cout <<"\tJumlah Mahasiswa yang tidak lulus = " <<tidaklulus << endl;
	return 0;
}


