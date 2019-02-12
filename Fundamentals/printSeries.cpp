/*
TAKE 2 INPUTS
N1 total numbers
N2 
Write a function which print a series of 3n+2 which are not multiples of N2
SAMPLE INPUTS
10
4
SAMPLE OP
5
11
14
17
23
26
29
35
38
41
*/
#include<iostream>
using namespace std;
int findSeries(int n1, int n2){
    for (int i=1; n1>0; i++){
     int value = 3*i+2;
     if(value % n2 !=0){
        cout<<value<<endl;
        n1--;
        }
    }
}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    findSeries(n1,n2);
}