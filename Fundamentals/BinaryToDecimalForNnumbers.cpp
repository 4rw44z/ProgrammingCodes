/*
Binary to Decimal Numbers for N inputs 
SAMPLE INPUTS
4
101
1111
00110
111111
SAMPLE OUTPUTS
5
15
6
63
*/




#include <iostream>
#include<cmath>
using namespace std;
int findDecimal(long long num);
int main() {
    long long num = 0;
    int i = 1;
    int n; 
    
    cin>>n;
    if(n==0) cout<<n;
    while(i<=n){
        cin>>num;
        cout<<findDecimal(num)<<endl;
        ++i;
         
    }

}
int findDecimal(long long num){
    int decimal = 0, i=0, remainder;
    while(!num==0){
        remainder = num%10;
        num = num/10;
        decimal = decimal + remainder * pow(2, i);
        ++i;
    }
    return decimal;
}
