#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
map<string,int>v;   //Declared a Map
v["CBIT"]=70;
v.insert({"AIIMS",100});
cout<<"Displaying the Contents of Map: \n"; // By default it displays based on the Ascending order of the Keys
for(auto d:v)
    cout<<d.first<<" "<<d.second<<endl;
cout<<"Let's Check whether Anurag University is there or not: ";
if(v.find("Anurag") != v.end())
    cout<<"Found";
else cout<<"Not Found";
cout<<"\nNow here I'm erasing the AIIMS & then let's print the Map again\n";
v.erase("AIIMS");
for(auto d:v)
    cout<<d.first<<" "<<d.second<<endl;

unordered_map<int,string>u;     // Declared a Unordered Map
u.emplace(1,"CCB");
u.emplace(2,"CPS");
for(auto t:u)
    cout<<t.first<<" "<<t.second<<endl;
u.erase(1);
cout<<"After Erasing CCB we've\n";
for(auto t:u)
    cout<<t.first<<" "<<t.second<<endl;
return 0; }
