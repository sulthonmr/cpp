#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if(((i<2||i>6)&&(j<10))||(j>10&&(i<1||i>7))||(j>11&&(i<2||i>6))||(j>12&&(i<3||i>5))||(j>13&&(i<4||i>4))){
                cout << " " << " ";
            } else {
                cout << "*" << " ";
            }
        }

        cout << endl;
    }
    
}