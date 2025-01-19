/*
C
B C
A B C
*/
#include<iostream>
using namespace std;
int main() {
cout<<"Enter Size : ";
int n;
cin>>n;
for(int i=65+(n-1);i>64;i--) {
    for(int j=65+(n-1);j>=i;j--)
        cout<<char(j)<<" ";
    cout<<endl;  }
    return 0; }
