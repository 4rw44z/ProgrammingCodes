#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr; // deletes the array but will print as the memory is cleared from heap but not stack.

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; // will print the memory of array is cleared only after the scopr of the array has ended.
    }
}