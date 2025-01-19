#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>a;       // Declared an Integer vector.
    int n;
    cout<<"Enter size of a vector:  ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: \n";

    for(int i=0;i<n;i++) {
    int v;
    cin>>v;
    a.push_back(v);}

    cout<<"\nElements of  Vector A are: ";
    for(auto e:a)   cout<<e<<" ";

    cout<<"\nThe size of the Vector is "<<a.size();
    cout<<"\nThe Capacity of the Vector is "<<a.capacity()<<endl;

    vector<int>b(a);    // Assigned Vector a, to b

    cout<<"Printing the Elements of vector using Reverse Iterator \n";
    for(auto i=b.rbegin();i!=b.rend();i++)
        cout<<*i<<" ";
    cout<<"\n2nd Element is "<<*(b.begin()+1);

    b.pop_back();
    cout<<"\nElements after Popping the Last Element from the Vector are: \n";
    for(auto x:b) cout<<x<<" "; // now auto is 'int'

    cout<<"\nIS Empty? "<<b.empty();

     /*As it is a Runtime code & values are not known so we can't use erase & insert but for static initialisation we can use these.
     cout<<"Erased 3rd Element"<<b.erase(b.begin()+2);
    cout<<"Inserted 14 at 4th Pos"<<b.insert(b.begin()+3,14);*/

    b.clear();
    cout<<"\nCleared the Vector B";
    cout<<"\nIS Empty? "<<b.empty();
return 0;  }
