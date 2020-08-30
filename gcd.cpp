#include <iostream>
using namespace std;
class gcd //Class declaration
{
    public: //Access specifier
    int a, b;
    void print();
};
void gcd::print()//Member Function(Function of Class)
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    while(a != b)//To check if the value of a is not equal to b and then execute
    {
        if(a > b)
            a -= b; //Subtract AND operator, subtracts right operand from left and assigns value to left
        else
            b -= a;
    }

    cout << "GCD = " << a;
}
int main()//Main Function
{
            gcd obj1;
            obj1.print();
}
