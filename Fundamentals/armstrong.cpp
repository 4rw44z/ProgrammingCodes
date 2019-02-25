/*
SAMPLE INPUT
371
SAMPLE OUTPUT
true
*/
#include <iostream>
using namespace std;
bool checkArmstrongNumber(int num);

int main(){
   int num;
   bool flag;
   cin>>num;

   flag = checkArmstrongNumber(num);
   if(flag == true)
      cout<<"true";
   else
      cout<<"false";

   return 0;
}

bool checkArmstrongNumber(int num) {
   int temp, sum=0, digit;
   bool isArm;

   temp = num;
   while(temp != 0) {
      digit = temp % 10;
      sum = sum +(digit * digit * digit);
      temp = temp/10;
   }
   if (sum==num)
      isArm = true;
   else
      isArm = false;

   return isArm;
}
