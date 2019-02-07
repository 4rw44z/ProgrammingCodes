#include <iostream>
using namespace std;
int main() {
    int n;
    int row = 1;

    cin>>n;
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j =1; j<=n-i; j++){
            cout<<ch;
            ch = ch +1;
        }
        ch--;
        for(int j =1; j<=n-i; j++ ){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}
