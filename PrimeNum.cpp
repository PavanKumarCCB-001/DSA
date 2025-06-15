#include<iostream>
#include<cmath>
using namespace std;
bool FN(int n)
{
    int c=0,x = sqrt(n);
    for(int i=1;i<=x;i++)
    {
        if(n%i==0){
            c++;
        if((n/i)!=i)
            c++;   }
    }
    if(c==2) return true;
    else return false;
}
int main()
{
    int n;
    cout<<"Enter a No. ";
    cin>>n;
    cout<<"The Number is Prime: "<<FN(n);
    return 0;
}
