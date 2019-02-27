#include<iostream>
using namespace std;
int main(){
    int x = 10; // normal variable initialised and declared
    int * xptr; // pointer variable is declared
    xptr = &x;  // pointers variable is initialised
    cout<<xptr<<endl; // will print the address of the xptr
    cout<<&x<<endl; // will print the address of x same as xptr
    cout<< *(&x)<<endl; // reference the value of x from &x address and print it
    cout<< *(xptr)<<endl; // dereference the value from xptr and prints it
    cout<<*(&xptr)<<endl; //will print the value of pointer variable as it will have the address of &x
    cout<<&(*xptr)<<endl; //will print the address of pointer type variable

}