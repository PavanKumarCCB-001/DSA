#include<iostream>
using namespace std;
int NF(int n)
{
    if(n>=0&&n<2)
    return 1;
    return n*NF(n-1);
}
int main()
{
    int n;
    cout<<"Enter a No. ";
    cin>>n;
    cout<<"Factorial is "<<NF(n);
    return 0;
}
