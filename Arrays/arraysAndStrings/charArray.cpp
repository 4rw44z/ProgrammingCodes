#include<iostream>
using namespace std;
int main(){
    // char a[] = "hello";
    // cout<<sizeof(a);

    // char b[100];
    // cin.get(b, '\n');
    // cout<<b; 
    string s("Hello World");
    cout<<s<<endl;
    cout<<s.length()<<endl;
    for(int j=0; j<s.length(); j++){
        // cout<<s[j]<<" ,"<<endl;
    }
    string s3;
    getline(cin,s3);
    cout<<s3<<endl;

    string arr[] = {"Apple", "Mango", "Guava", "Chiku"}; //array of Strings
    for(int i =0; i<4; i++){
        cout<<arr[i]<<endl;
    }
}