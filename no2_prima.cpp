#include <iostream>
using namespace std;

int main(){
    cout << "Bilangan prima dari 1-100 : " << endl;
    for (int i = 1; i <= 100; i++)
    {   
        if(i==2||i==3||i==5||i==7){
            cout << i << endl;
        }
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
            cout << i << endl;
        }
    }
    
}