/*
SAMPLE INPUT
8 Numbers
-2 -3 4 -1 -2 1 5 -3 ARRAY

SAMPLE OUTPUT 
7
*/
#include<iostream>
using namespace std;
int maxSubArraySum(int arr[], int n){
    int sum=0; 
    int max=0;
    for(int i=0; i<n; i++){
        max = max + arr[i];
        if(sum<max) sum = max;
        if(max<0) max =0;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maxSubArraySum(arr, n);
}