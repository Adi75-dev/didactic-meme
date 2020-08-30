#include<iostream>
using namespace std;
int main() //Main method
{
    int a=0, b=1, c; //Always assign a as 0, b as 1 in fibbonaci
    cout<<" Fibonnaci Series:  ";
    cout<<a<<" "<<b;
    for(int i=0;i<=15;i++){
        c=a+b;
        cout<<" "<<c;
        a = b;
        b = c;
    }
    return 0;
}