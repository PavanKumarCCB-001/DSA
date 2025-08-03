#include<iostream>
#include<vector>
using namespace std;

vector<int> PSS(vector<int>& N) {
    int t,l = N.size();   // Length of a Vector
    for(int i=0;i<l;i++)  {
        for(int j=i+1;j<l;j++) {
            if(N.at(j)<N.at(i))     // Swaps the Element
            {
                t = N.at(j);
                N.at(j) = N.at(i);
                N.at(i) = t;  } } }
    return N;   }

int main() {
    cout<<"Enter Size: ";
    int s;
    cin>>s;
    vector<int>V;
    cout<<"Enter Numbers:\n";
    for(int i=0;i<s;i++) {
        int n;
        cin>>n;
        V.push_back(n); }
    vector<int>R = PSS(V);
    cout<<"Numbers in the Sorted Order are: \n";
    for(int i=0;i<s;i++)
            cout<<R.at(i)<<"  ";
    return 0; }
