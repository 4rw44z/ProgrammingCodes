/*
The number of sequence should be strictly increasing or descreasing

SAMPLE INPUTS 
N1 = 5
then 1 2 3 4 5
SAMPLE O/P
True
*/
#include<iostream>
using namespace std;
bool findSeq(int * arr, int n)
{ int Yes;
// if ( n==0) return 0;
for(int i=0; i<arr[i]; i++){
    if((arr[i]+1==arr[i+1]) ||(arr[i]-1==arr[i+1]))
    Yes = 1;
    else{
        Yes = 0;
        return false;
    }
}
if(Yes==1) return true;
}
int main(){
int n;
int arr[100];
cin>>n;
for(int i=0; i<n; i++){
    cin>> arr[i];
}
cout<<findSeq(arr, n);
}