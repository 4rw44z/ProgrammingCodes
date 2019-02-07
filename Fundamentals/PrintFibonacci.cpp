#include <iostream>
using namespace std;
int main() {
    int a= 0, b = 1, c = a+b;
    cout<< "0,1,";
    int n;
   
    cin>>n;
    if(n==1) return 0;
    int i =2;
    while(i<n){
        cout<<c<<",";
        a = b;
        b = c;
        c = a + b;
        i = i + 1;
    }
    
    
}
