#include<iostream>
using namespace std;


int main(){
    int a[100];
    int n=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    for(int i=0; i<n; i++){
        if(a[i]==x){
        
        cout<<"Element found at "<< i+1 <<endl;
        break;
        }
        if(i==n){
            cout<<"Element Not Found"<<endl;
        }
    }
    
}