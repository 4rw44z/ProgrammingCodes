#include<iostream>
#include<string>
using namespace std;




int main(){
char str[] = "Hi this is a c++ program ";
char *ptr;
ptr = strtok(str, " ");
while(ptr !=NULL){
    cout<<ptr<<endl;
    ptr = strtok(NULL, " ");

}
}