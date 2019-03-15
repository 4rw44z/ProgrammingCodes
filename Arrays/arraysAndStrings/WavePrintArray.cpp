/*
Sample I/P 
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample O/P
11, 21, 31, 41, 12, 22, 32, 42, 13, 23, 33, 43, 14, 24, 34, 44, END

*/
#include<iostream>
using namespace std;
int main(){
    int matrix[100][100];
    int m, n, i,j;
    cin>>m>>n;
    for(i = 0; i<m; i++){
        for(j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    // Checking for Correct input by printing matrix
    // for(i = 0; i<m; i++){
    //     for(j=0; j<n; j++){
    //         cout<<matrix[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }
    j=0;
    while(j<n){
        for(i=0; i<m; i++){
            cout<<matrix[i][j]<<", ";
        }
        j++;
        // if(j<n){
        //     for(i=m-1; i>=0; i--){
        //         cout<<matrix[i][j]<<", ";
        //     }
        //     j++;
        // }
        // j++;
    }
    cout<<"END";
}