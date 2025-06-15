#include<iostream>  // for i/o
#include<cmath>     // for sqrt
#include<vector>    // for Vectors
#include<algorithm> // for sort function.
using namespace std;

vector<int> FN(int n)
{
    vector<int>t;
    int x = sqrt(n);
    for(int i=1;i<=x;i++)
    {
        if(n%i==0){
        t.push_back(i);
        if((n/i) != i)
        t.push_back(n/i); }
    }
    sort(t.begin(),t.end());
    return t;
}
int main()
{
    int n;
    cout<<"Enter a No. ";
    cin>>n;
    vector<int>R = FN(n);
    for(auto z:R) cout<<z<<" ";
    return 0;
}
