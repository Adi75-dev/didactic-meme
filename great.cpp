#include<iostream>
using namespace std;
void great(int, int); //Declaring Function
int main(){
    int a, b;
    cout<<"Enter two no= ";
    cin>>a>>b; //User Input
    great(a, b);
}
void great(int p, int q) 
{
    if(p>q)
    {
        cout<<p<<"is greater";
    }
    else
    {
        cout<<q<<"is greater";
    }
}