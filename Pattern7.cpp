/*
  *
 ***
*****
*/
#include<iostream>
using namespace std;
class P7{
public:
    P7() {
    cout<<"Enter Size: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        for(int j=0;j<i*2+1;j++)
            cout<<"*";
        for(int j=0;j<n-i-1;j++)
            cout<<"";
        cout<<endl;   }    }  };
int main() {
    P7 ob;
    return 0;
}
