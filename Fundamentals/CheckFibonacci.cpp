#include <iostream>
using namespace std;
int main() {
    int a=0, b=1, c = 0;
    int n;
    cin>>n;
    while(c<n){
        a = b;
        b = c;
        c = a + b;
    }
    if(c==n) 
    cout<<"it is a fibonacci series number";
    else{
    cout<<"Not a fibonacci number";
    }

}
