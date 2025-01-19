// This Code will demonstrate the Concept of Pass by Value & Pass by Reference
#include<bits/stdc++.h>
using namespace std;
// Pass by Value
void PBV(int n)  {
    cout<<"Pass by Value in FN\n";
    n+=5;
    cout<<n<<endl;  }
// Pass by Reference
void PBR(int &x)  {
cout<<"Pass by Reference\n";
    x+=5;
    cout<<x<<endl;  }
int main()   { // 10 5 10 10

    int n = 5;
    PBV(n);
    cout<<n<<"\n\n"; // 5
    PBR(n);
    cout<<n;
    return 0;   }
