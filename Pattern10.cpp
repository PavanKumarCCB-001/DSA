#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter Size: ";
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++) {
            int s=i;
    if(i>n) s = 2*n-i;
        for(int j=1;j<=s;j++)
            cout<<"*";
        cout<<endl;    }   }
