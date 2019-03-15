/*
SAMPLE INPUT 
N = 6
SAMPLE OUTPUT
1
111
1001
11111
100001
*/
#include <iostream>

using namespace std;

void printPattern(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<1<<endl;
    for(int i=1;i<=(n-2);i++)
    {
        for(int j=1 ; j <= i+2 ; j++)
        {
            if(i%2 != 0)
            {
                cout<<1;
            }
            else if(j!=1 && j!=(i+2))
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            }
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;
    printPattern(n);

    return 0;
}