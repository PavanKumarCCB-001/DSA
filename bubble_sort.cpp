#include<iostream>
#include<vector>
using namespace std;
vector<int> PBS(vector<int>& N) {
    int c=1,t, l = N.size();
    while(c<l) {
        for(int i=0;i<l-c;i++) {
            if(N.at(i) > N.at(i+1)) {
                t = N.at(i+1);
                N.at(i+1) = N.at(i);
                N.at(i) = t; }  }
    c++;  }
    return N; }

int main() {
    int s;
    cout<<"Enter the Size of the Vector: ";
    cin>>s;
    vector<int> A;
    cout<<"Enter the Elements into Vector: \n";
    for(int i=0;i<s;i++) {
        int n;
        cin>>n;
        A.push_back(n);  }
    vector<int>R = PBS(A);
    cout<<"Sorted Array is: \n";
    for(int i=0;i<s;i++)
        cout<<R.at(i)<<" ";
    return 0; }
