#include <iostream>
using namespace std;
int arr[30],jumlah=0;

void fungsi_array(int a){
    jumlah = jumlah + arr[a];
}

void fungsi_nilai_kelipatan(int a){
    for (int i = 0; i < 30; i++)
    {
        if(i==0){
            arr[i] = 0;
        } else {
            if(i%a==0){
                arr[i] = 20;
            }else {
                arr[i] = 0;
            }
        }
    }
}

int main(){
    
    fungsi_nilai_kelipatan(5);

    for (int i = 0; i < 30; i++)
    {
        cout << "data indeks ke-" <<i<<" = "<<  arr[i] << endl;
    }

    for (int i = 0; i < 30; i++)
    {
        fungsi_array(i);
    }

    cout << "Jumlahnya = "<<  jumlah<< endl;
    
    return 0;
}