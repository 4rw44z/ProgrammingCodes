#include<iostream>
using namespace std;
void increment (int *a){ //arguments as pointer
*a = *a + 1; //dereference and increment
cout<<"in function"<<*a<<endl; // dereference and print
}
int main(){
    int a = 10;
    increment(&a); // Reference is passed
    cout<<"in main "<<a<<endl;
}