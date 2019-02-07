#include <iostream>
using namespace std;
int main() {
    int n;
    int i=2;
    cin>>n;

    while(i<=n-1){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
            }i++;
    }
    if(i==n){
    cout<<"Prime"<<endl;
    }
return 0;
}
