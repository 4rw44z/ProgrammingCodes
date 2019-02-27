/*
SAMPLE I/P
9
-4 1 3 -2 6 2 -8 -9 4
SAMPLE O/P
Maximum is 10
*/



#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int maxSum =0, cSum=0;
    int n;
    int left = -1;
    int right = -1;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   

/* n^3 way

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j;k++){
                cSum +=arr[k];

            }
            //update maxSum if curSum is bigger than max sum
            if(cSum>maxSum){
                maxSum = cSum;
                left = i;
                right = j;
            }
        }
    }
    cout<<"Maximum Sum is "<<maxSum<<endl;
    for(int k=left; k<=right; k++){
        cout<<arr[k]<<", ";
    }
}
*/
//Kadane's Algo  Optimised Code in O of N
for(int i=0; i<n; i++){
    cSum = cSum + arr[i];
    if(cSum < 0){
        cSum = 0;
    }
    maxSum = max(cSum,maxSum);
}
cout<<"Maximum is "<<maxSum<<endl;
}