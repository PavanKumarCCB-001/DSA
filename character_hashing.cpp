#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    cout<<"Enter a String: ";
    getline(cin,a);
    cout<<"Length of a string is: "<<a.size()<<endl;
    transform(a.begin(),a.end(),a.begin(),::toupper);
    cout<<"Uppercase: "<<a<<endl;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    cout<<"Lowercase: "<<a;
    return 0;
}
