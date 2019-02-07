#include <iostream>
using namespace std;
int main() {
    int n; 
    int val = 1;
    cin>>n;
    int row = 1;
    while(row <=n){ //total number of rows
        int j = 1;
        while(j <=row){ //total number of elements in rows 
            
            cout<<val<<" "; //values in the row
            val++;
            j++;
        }
        cout<<endl;
        row++;
    }
}
