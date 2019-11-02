#include <iostream>
using namespace std;

int main(){
    int n,j=0;
    cout << "Berapa data yang mau diinputkan ? = ";
    cin >> n;

    string data[n];

    for (int i = 1; i <= n; i++)
    {
        cout << "Masukan data ke-" << i << " = ";
        cin >> data[j];
        j++;
    }

    j=0;
    cout << "---------------------------------------------" << endl;

    for (int a = 1; a <= n; a++)
    {
        cout << "Isi data ke-" << a << " = ";
        cout << data[j] << endl;
        j++;
    }
    cout << "Data nomor berapa yang mau anda rubah ? = ";
    cin >> j;

    cout << "---------------------------------------------" << endl;
    cout << "Data yang akan dirubah = " << data[j-1] << endl;
    cout << "Menjadi                = ";
    cin >> data[j-1];

    cout << "---------------------------------------------" << endl;
    j=0;
    for (int a = 1; a <= n; a++)
    {   
        cout << "Isi data ke-" << a << " = ";
        cout << data[j] << endl;
        j++;
    }
    cout << "Tekan enter untuk melanjutkan...";

    cin.get();
    cin.ignore();
}