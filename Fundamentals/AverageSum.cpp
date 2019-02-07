#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int n, num;
    int sum=0;
    int average=0;
    cin>>n;
    while(i<=n){
        cin>>num;
        sum = sum +num;
        // cout<<num<<endl;
        i++;
    }
    cout<<sum<<endl;
    average = sum/n;
    cout<<"average is "<<average<<endl;
}
