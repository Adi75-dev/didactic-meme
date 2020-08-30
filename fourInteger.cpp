#include <iostream>
using namespace std;
int main()//Main method
{
    int a, b, c, d, small;
    int min (int, int, int, int); //Prototyping
    cout<<"Enter four Integers: "<<endl;
    cin>>a>>b>>c>>d; //User Input
    small = min(a, b, c, d);//User-Function
    cout<<"The smallest number is:  "<<small;
}
int min (int num1, int num2, int num3, int num4)
{
    int low;
    if(num1 < num2)
        low = num1;
    else 
        low = num2; //Depending on value of low, it will be updated
    if(num3<low)
        low = num3;
    if(num4<low)//Checks if num3 and num4 are less than low
        low = num4;
    return (low);//Returns value of Low
}