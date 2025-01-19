#include<bits/stdc++.h>
using namespace std;
class S {
public:
    S(int ch, vector<float>&a)     {
        switch(ch)         {
        case 1:
            cout<<"Area of the Circle is "<<M_PI * a[0] * a[0];
            break;
        case 2:
            cout<<"Area of the Rectangle is "<< a[0] * a[1];
            break;   }       }   };
int main()  {
    int ch;
    cout<<"Pick an Option: \t 1\t 2 \n";
    cin>>ch;
    vector<float> a;
    if(ch==1){
    cout<<"Enter Radius: \n";
    float r;
    cin>>r;
    a.push_back(r);              }
    else if(ch==2){
        cout<<"Enter 2 Elements into Array: \n";
        float l,b;
        cin>>l>>b;
        a.push_back(l);
        a.push_back(b);      }
        else cout<<"Invalid Choice.";
S ob(ch,a);
return 0;  }
