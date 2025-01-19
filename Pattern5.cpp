/*
        * * * * *
        * * * *
        * * *
        * *
        *
To Print this Inverted Pyramid.
*/
#include<iostream>
using namespace std;
class P5{
public:
P5() {
    cout<<"Enter Size:  ";
    int n;
    cin>>n;
for(int i=1;i<=n;i++)   {
    for(int j=n;j>=i;j--)
        cout<<"* ";
    cout<<endl;  }  }   };

int main() {
    P5 ob;
    return 0; }
