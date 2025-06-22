#include<iostream>
using namespace std;

bool RF(string s,int n,int i)  {
    if(i>=n/2)return 1;
    if(s[i]==s[n-i-1])
        return RF(s,n,i+1); }

int main() {
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    cout<<"The String is Palindrome:  "<<RF(s,s.size(),0);
    return 0;  }
