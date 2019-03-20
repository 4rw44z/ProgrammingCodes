/*
SAMPLE INPUTS
9 N Numbers of Elements
5
7
9
1
2
4
6
8
3 
10 Target sum
*/
#include<iostream>
using namespace std;
void findTrplets(int arr[], int n, int target){
    if(target==0 || n==0) cout<<"Invalid";
    int i, j, k=0;
    for(i=0; i<n; i++){
       for(j=0; j<n; j++){
           for(k=0; k<n; k++){
               if((arr[i]+arr[j]+arr[k]== target) && i<j && j<k){
                   cout<<arr[i]<<", "<<arr[j]<<" AND "<<arr[k]<<endl;
               }
           }
       }
    }
}
int main(){
    int n, i, j, k;
    cin>>n;
    int *arr = new int[n];
    for(int l=0; l<n; l++){
        cin>>arr[l];
    }
    int target;
    cin>>target;
    findTrplets(arr, n, target);

}