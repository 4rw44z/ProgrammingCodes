/*
take following I/P
Minimum farenheit value
Maximum Farenheit Value
STEP

*/
#include<iostream>
using namespace std;
int main(){
   int minTemp;
   int maxTemp;
   int Step;
   cin>>minTemp>>maxTemp>>Step;
   for(float f = minTemp; f<=maxTemp; f = f+Step){
       float c =(5.0/9)*(f-32);
       cout<<f<<" "<<c<<endl;
   } 
}