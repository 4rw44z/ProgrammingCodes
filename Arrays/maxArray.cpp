/*
SAMPLE I/P
N = 4
2 3 4 2 
SAMPLE O/P
4
*/
#include<iostream>
using namespace std;
int main(){
    int n; 
    int *arr = new int[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(arr[0]<arr[i]){
            arr[0]= arr[i];
        }
    }
    cout<<arr[0];
}