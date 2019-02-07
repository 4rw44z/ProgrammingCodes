#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b, c, x1, x2, disc;
    cin>>a>>b>>c;
    disc = (b*b)-(4*a*c);
    if(disc>0){
        cout<<"Real And Distinct"<<endl;
        x1 = (-b - sqrt(disc))/2*a;
        x2 = (-b + sqrt(disc))/2*a;
        cout<<x1<<" "<<x2<<endl;
        
    }
    else if(disc == 0){
        cout<<"Real and Equal"<<endl;
        x1 = (-b + sqrt(disc))/2*a;
        x2 = x1;
        cout<<x1<<" "<<x2;
    }

    else{
        cout<<"Imaginary"<<endl;
    }

}
