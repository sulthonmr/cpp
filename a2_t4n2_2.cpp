#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= 15; j++)
        {
            if(i==1||i==9){
                if(j==11){
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            } else if(i==2||i==8){
                if(j==11||j==12){   
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            } else if(i==3||i==7){
                if(j<14){
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            } else if(i==4||i==6){
                if(j<15){
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            } else {
                cout << "* ";
            }
            
        }
        cout << endl;
    }
    return 0;
}