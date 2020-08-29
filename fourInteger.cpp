#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, small;
    int min (int, int, int, int); //Prototyping
    cout<<"Enter four Integers: "<<endl;
    cin>>a>>b>>c>>d;
    small = min(a, b, c, d); //Predefine function
    cout<<"The smallest number is:  "<<small;
}
int min (int num1, int num2, int num3, int num4)
{
    int low;
    if(num1 < num2)
        low = num1;
    else 
        low = num2;
    if(num3<low)
        low = num3;
    if(num4<low)
        low = num4;
    return (low);
}