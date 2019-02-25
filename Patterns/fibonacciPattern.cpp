/*
SAMPLE I/P
4
SAMPLE O/P
0
1 1
2 3 5
8 13 21 34
*/
#include<iostream>
using namespace std;
void printTriangle(int n){
    int a=0, b=1, c=0;
    if(n<=1) return;
    for(int i =0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<c<<" ";
            a=b;
            b=c;
            c = a+b;
        }
        cout<<endl;
    }
}
int main(){
   
    int n;
     cin>>n;
printTriangle(n);
}