#include <iostream>
#include <iomanip>
using namespace std;

void suhu(int a,int b){
    int reamur;
    int fahrenheit;
    if(a==1){
        reamur = 4 * b / 5;
        cout << reamur <<setw(7);
    }else if(a==2){
        fahrenheit = 9 * b / 5 + 32;
        cout << fahrenheit ;
    }
}

int main(){
    cout <<"C"<<setw(7)<<"R"<<setw(7)<<"F"<< endl;
    for (int i = 10; i <= 100; i+=10)
    {
        cout << i <<setw(7);
        for (int j = 1; j <= 2; j++)
        {
            suhu(j,i);
        }
        cout << endl;
    }
    
}