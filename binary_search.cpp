#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    cout<<"Enter the size: ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" Elements:\n";
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    cout<<"Enter Target: ";
    int t;
    cin>>t;
    cout<<"Element Found: "<<binary_search(v.begin(),v.end(),t); // Binary Search function returns Boolean value 1 indicates that the Element is present & 0 for element not there.
    return 0;
}
