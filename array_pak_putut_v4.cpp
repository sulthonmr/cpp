#include <iostream>
using namespace std;
int MAX_ARRAY = 5;
string data_array[10]={"Saiful","Maimun","Mahfud","Lenggo","Martin"};


void output_array(){
    cout << "-------------------------------------"<<endl;
    for (int i = 1; i <= MAX_ARRAY; i++)
    {
        cout << "Data ke-" << i << " = " << data_array[i-1] <<endl;
    }
    cout << "-------------------------------------"<<endl;
}
void input_array(int a){
    int b;
    if(a==1){
        cout << "-------------------------------------"<<endl;
        cout << "Input data ke-" << MAX_ARRAY+1 << " = ";
        cin >> data_array[MAX_ARRAY];
        MAX_ARRAY += 1;
        output_array();
    }if(a==2){
        do
        {
            cout << "-------------------------------------"<<endl;
            cout << "Masukan nomor data yang akan dirubah = ";
            cin >> b;
            if(b<1||b>MAX_ARRAY){
                cout << "Inputan salah!!"<<endl;
            }
        } while (b<1||b>MAX_ARRAY);
        cout << "-------------------------------------"<<endl;
        cout << "Data yang akan dirubah data ke-"<<b<<"  = "<<data_array[b-1] << endl;
        cout << "Menjadi                           = ";
        cin >> data_array[b-1];
        output_array();
    }
    
}

int main(){
    int pilih;
    cout << "---Program Input & Edit Data Array---"<<endl;
    output_array();
    
    do
    {
        cout << "[1] Input Data Baru" << endl;
        cout << "[2] Edit Data" << endl;
        cout << "[3] Keluar" << endl;
        cout << "-> Pilih = ";
        cin >> pilih;
        if(pilih<1||pilih>3){
            cout << "Menu dengan no."<<pilih<<" tidak ditemukan !" << endl;
        } else if(pilih==1){
            if(MAX_ARRAY<10){
                input_array(1);
            }
            else if(MAX_ARRAY>=10){
                cout << "Data Sudah Penuh!!!" << endl;
                cout << "-------------------------------------"<<endl;
            }
        } else if(pilih==2){
            input_array(2);
        } 
    } while (pilih<3||pilih>3);

    
    cout << "Tekan enter untuk melanjutkan...";

    cin.get();
    cin.ignore();
}