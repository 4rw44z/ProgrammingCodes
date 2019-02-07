/*
Sample Input 
1111
Sample Output 
5
*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n, remainder;
int decimal =0, i =0;
long long num;
cin>>num;
while(!num==0){
    remainder = num%10;
    num = num/10;
    decimal = decimal + remainder * pow(2,i);
    ++i;
}
cout<<decimal<<endl;
}