/*
Number will be given and you have to find a smaller number such that you subtract the digits by 9 to get that smaller number
also barring that the first number should be not 0 
SAMPLE INPUT
9871
SAMPLE OUTPUT
9121


*/




#include<iostream>
using namespace std;
int main(){
    char arr[20];
    cin>>arr;
    int i=0;
    if(arr[i] == '9'){
        i++;
    }
    for( ; arr[i]!='\0'; i++){
        int digit = arr[i] -'0'; // for converting the characters into digits
        if(digit>=5){
            digit = 9 - digit;
            arr[i] = digit + '0'; //converting it to character

        }
    }
    cout<<arr<<endl;
}