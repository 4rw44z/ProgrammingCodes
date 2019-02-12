/*
TAKE N NUMBERS 
INPUT  NUMBERS
IF SUM OF EVEN DIGITS IS DIVISIBLE BY 4
OR 
SUM OF ODD DIGITS IS DIVISIBLE BY 3 
THEN PRINT TRUE
ELSE PRINT FALSE
SAMPLE I/P
2 // 2 NUMBERS
12345 // N1
12134 //N2
SAMPLE O/P
YES 
NO
*/
#include<iostream>
using namespace std;
void evenOdd(int n){
    int rem = 0; int even = 0; int odd = 0;
    while(n>0){
        rem = n%10;
        if(rem%2==0){
            even = even + rem;
        }
        else{
            odd = odd + rem;
        }
        n = n/10;

    }
    if((even%4==0)|| (odd%3==0)) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int x=0;
    while(x<n){
        cin>>n;
        evenOdd(n);
    }

}