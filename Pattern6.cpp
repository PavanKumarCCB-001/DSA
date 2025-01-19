/*
1 2 3 4
1 2 3
1 2
1
To print the Above Pattern
*/
#include<iostream>
using namespace std;
class P6 {
public:
    P6()  {
        cout<<"Enter Size: ";
        int n;
        cin>>n; // 4
        for(int i=n;i>0;i--) {
            for(int j = 1;j<=i;j++)
                cout<<j<<" ";
            cout<<endl;  }  }   };
int main() {
P6 ob;
return 0; }
