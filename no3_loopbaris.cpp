#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,k;
    cout << "Berapa baris yang akan ditampilkan : ";
    cin >> a;
    cout << endl;
    for (int i = 1; i <= a; i++)
    {
        k = pow(2,i-1);
        for (int j = 0; j < i; j++)
        {
            cout << k+j << " ";
        }
        cout << endl;
    }
    
    
}