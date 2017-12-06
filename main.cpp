// Priyanka Khanal
// Problem 1

#include <iostream>
using namespace std;

int main()
{
    int multiple=0;
    for(int i=0;i<=1000;i++)
    {
        if ((i%3==0)||(i%5==0))
        multiple+=i;
    }
    cout<<"the sum of the multiples  of 3 or 5 below 1000 is "<<multiple <<endl;
    return 0;
}