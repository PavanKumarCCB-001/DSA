#include<iostream>
using namespace std;
int NF(int N)
{
    if(N==0) return 0 ;
    return N + NF(N-1);

}
int main()
{
    int n;
    cout<<"No. ";
    cin>>n;
    cout<<"Sum is: "<<NF(n);
    return 0;
}
