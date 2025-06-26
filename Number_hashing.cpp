#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    vector<int>A;
    cout<<"Enter the Elements into the Vector\n";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        A.push_back(ele); }

    auto l = A.at(0);   // considering the first element of the Vector as the Largest initially
    for(int i=0;i<n;i++) {
        if(A.at(i) > l) l = A.at(i); }

    vector<int>hs(l+1,0);   // Initializes all the Elements of the Vector to 0's
    // Let's precompute
    for(int i=0;i<n;i++)    hs.at(A.at(i))++;

    cout<<"For how many number of elements you want to count the Frequency: ";
    int v,e;
    cin>>v;

    cout<<"Enter the Elements  (Should Not cross the Largest Element of the Vector bcoz, it gives some Garbage Output) \n";
    vector<int>V;
    for(int i=0;i<v;i++){
            cin>>e;
      V.push_back(e);}

    for(int i=0;i<v;i++)
        cout<<"Frequency of the "<<V.at(i)<<": "<<hs[V.at(i)]<<endl;
    return 0;  }
