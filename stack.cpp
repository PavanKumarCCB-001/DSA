#include<bits/stdc++.h>
using namespace std;

// Operations on the Stack are: Push, Pop & Display
stack<int>s;        // Declared Stack
int ch,val,n;

int isfull()  {
    if(s.size()==n)
        return 1;
    else
        return 0; }

void Push(int x) {
if(isfull())
    cout<<"Stack Overflow!\n";
else {
s.push(x);
cout<<"Pushed: "<<x<<endl; }  }

void Pop() {
if(s.empty()) cout<<"Stack Underflow\n";
else {
    cout<<"Popped: "<<s.top()<<endl;
    s.pop(); } }

void Display() {
if(s.empty()) cout<<"Stack Underflow\n";
else{
        stack<int>t=s;
        cout<<"Elements of the Stack are: \n";
        while(!t.empty()){
            cout<<t.top()<<" ";
            t.pop();   }
            cout<<endl;   }  }

int main() {
cout<<"Enter the Size of the Stack:  ";
cin>>n;
cout<<"Operations on the Stack:\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
while(1) {
    cout<<"Pick Your Choice: ";
     cin>>ch;
     switch(ch) {
    case 1:
        cout<<"Enter a Value:  ";
        cin>>val;
        Push(val);
        break;
    case 2:
        Pop();
        break;
    case 3:
        Display();
        break;
    case 4:
        return 0;
         break;
    default:
        cout<<"Invalid Choice.\n";
        break;      } }
return 0; }
