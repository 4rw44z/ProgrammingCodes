/*
SAMPLE INPUTS
5433231 A Number
3 A digits that u need to count in the above number
SAMPLE OUTPUTS
3

*/
#include<iostream>
using namespace std;
int findDigits(int n, int num){
    int remainder = 0; int x = 0;

if(n==0) return 0;
while(n>0){
remainder = n%10;
if(remainder == num) x++;
n = n/10;
}
return x;
}
int main(){
    int n;
    cin>>n;
    int num;
    cin>>num;
    cout<<findDigits(n, num);

    return 0;
}