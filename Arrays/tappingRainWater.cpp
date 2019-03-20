/*
TAPPING RAIN WATER PROBLEM  // Nagarro Favourite 
N contains number of integers
second line contains N spaces seprated integers representing the elevation map 
refer the image in Array Folder RainWaterproblem.jpg
SAMPLE INPUT
10
1 2 1 3 0 1 2 1 2 1
SAMPLE OUTPUT
5
*/
#include<iostream>
using namespace std;
int capacity(int arr[], int n){
int left[n];
int right[n];
for(int i=1; i<n; i++){
    left[0] = arr[0];
    left[i] = max(left[i-1], arr[i]);
}
for(int i=n-2; i>=0; i--){
    right[n-1] = arr[n-1];
    right[i]= max(right[i+1], arr[i]);
}
int water = 0;
for(int i=0; i<n; i++){
water += min(left[i], right[i])-arr[i];
}
return water;
}
int main(){
    int n; 
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<capacity(arr, n);


}