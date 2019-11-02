#include <iostream>
using namespace std;

const int MAX_ARRAY = 5;
string d_array[MAX_ARRAY];

void perulangan_array(string task){
    
    for (int i = 1; i <= MAX_ARRAY; i++)
    {   
        
        if(task=="Masukkan"){
            cout <<  task << " Sembarang Data ke-" << i << " = ";
            cin >> d_array[i-1];
        } else if(task=="Isi"){
            cout <<  task << " Data ke-" << i << " = ";
            cout << d_array[i-1] << endl;
        } else if(task=="rubah"){            
            d_array[0] = "Achmad Abdul";
            d_array[1] = "Galuh Samudra Sinatri";
            d_array[2] = "Lala Marfuah";
            d_array[3] = "Septian Saepudin";
            d_array[4] = "Dina Stefia";
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
    cout << "> Output data, setelah dirubah." << endl;
    perulangan_array("rubah");
    perulangan_array("Isi");
    return 0;
}