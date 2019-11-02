#include <iostream>
using namespace std;

const int MAX_ARRAY = 5;
string d_array[MAX_ARRAY];

void perulangan_array(string task){
    
    for (int i = 1; i <= MAX_ARRAY; i++)
    {   
        cout <<  task << " Data ke-" << i << " = ";
        if(task=="Masukkan"){
            cin >> d_array[i-1];
        } else if(task=="Isi"){
            cout << d_array[i-1] << endl;
        } else if(task=="Hasil Perubahan"){
            d_array[i-1] = "berubah";
            cout << d_array[i-1] << endl;
        }
    }
    
}

int main(){
    int pilih;
    cout << "> Masukan data terlebih dahulu." << endl;
    perulangan_array("Masukkan");
    cout << "-----------------------------------"<< endl;
    cout << "> Output data." << endl;
    perulangan_array("Isi");
    cout << "-----------------------------------"<< endl;
    cout << "[1] Ubah semua data" << endl;
    cout << "Pilih = ";
    cin >> pilih;

    if(pilih==1){
        cout << "-----------------------------------"<< endl;
        cout << "> Output data, setelah dirubah." << endl;
        perulangan_array("Hasil Perubahan");
    }
    return 0;
}