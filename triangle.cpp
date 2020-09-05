#include<iostream>
#include<cmath> 
/*C++ library which contains all the math functions such as sqrt,
also written as <math.h> in older C++ versions*/
using namespace std;
class triangle
{
    private:
    float a, p, x, y, z;
    public:
    void accept()
    {
        cout<<"Enter three sides of triangle:\t";
        cin >> x >> y >>z; //User input
    }
    void compute() //Calculates the triangle's area
    {
            p=x+y+z;
            double s=p/2;
            a=sqrt(s*(s-x)*(s-y)*(s-z));
            cout<<"Area"<<a;
    }
};
int main()
{
    triangle t1;
    t1.accept();
    t1.compute();
}