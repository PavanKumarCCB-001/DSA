#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"Enter a String: ";
    getline(cin,a);

    // Now let's precompute
    vector<int>HS(256,0);
    for(int i=0;i<a.size();i++)
        HS.at(a.at(i))++;

    cout<<"How many number of characters frequency you want to know: ";
    int f;
    cin>>f;
    vector<char>CV;
    for(int i=0;i<f;i++)
    {
        char e;
        cin>>e;
        CV.push_back(e);
    }
    for(int i=0;i<f;i++)
        cout<<"Frequency of "<<CV.at(i)<<": "<<HS.at(CV.at(i))<<endl;
    return 0;
}
