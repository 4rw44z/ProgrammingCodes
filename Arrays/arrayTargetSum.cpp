/*
SAMPLE INPUTS
5 / N 
1 3 4 2 5 //array
5 // Target
SAMPLE OUTPUT
1 AND 4
2 AND 3
*/
#include<iostream>
using namespace std;
int main(){
    int n;
     cin>>n;
     int *arr = new int[n];
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     int target;
     cin>>target;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((target == arr[i]+ arr[j]) && arr[i]<arr[j]) cout<<arr[i]<<" AND "<<arr[j]<<endl;
        }
    }
}