/*
SAMPLE INPUT
2 Number of Test Case
4 Number of elements in First Array
1 2 3 4 Array 
3 Number of Elements in the Second array
-10 5 10
SAMPLE OUTPUT

10 
15
*/
#include<iostream>
using namespace std;
void subArraySum(int arr[], int n1){
    for(int i=0; i<n1; i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int main(){
    int t; 
    cin>>t;
    while(t>0){
        int n1;
        cin>>n1;
        int *arr = new int[n1];
        for(int i=0; i<n1; i++){
            cin>>arr[i];
        }
        subArraySum(arr, n1);
        t--;
    }  
}