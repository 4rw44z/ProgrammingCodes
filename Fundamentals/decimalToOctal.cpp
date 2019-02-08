/*
Sample input
63
Sample Output
77
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int decimal;
    int octal =0, i=1;
    cin>>decimal;
    while(!decimal == 0){
        octal = octal + ((decimal %8) *i);
        decimal = decimal/8;
        i = i*10;
    }
    cout<<octal<<endl;
    return 0;
}
