#include<bits/stdc++.h>
using namespace std;

// Operations on Queue are Enqueue, Dequeue, Display
queue<int>q;    // Declared queue
int n,ch,val;

int Isfull() {
if(q.size() == n)return 1;return 0; }

void Enqueue(int x) {
if(Isfull()) cout<<"Queue Overflow\n";
else {
    q.push(x);
    cout<<"Enqueued: "<<x<<endl; } }

void Dequeue() {
if(q.empty()) cout<<"Queue Underflow\n";
else {
    cout<<"Dequeued: "<<q.front()<<endl;
    q.pop(); } }

void Display() {
if(q.empty()) cout<<"Queue Underflow";
else {
    queue<int>t = q;
    cout<<"Elements in the Queue are: \n";
    while(!t.empty()) {
        cout<<t.front()<<" ";
        t.pop(); } }
        cout<<endl; }

int main() {
cout<<"Enter the Size of the Queue: ";
cin>>n;
cout<<"Queue Operations are:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
while(1){
    cout<<"Pick Your Choice: ";
    cin>>ch;
    switch(ch){
case 1:
    cout<<"Enter Val: ";
    cin>>val;
    Enqueue(val);
    break;
case 2:
    Dequeue();
    break;
case 3:
    Display();
    break;
case 4:
    return 0;
    break;
default:
    cout<<"Invalid Choice!\n";
    break; } }
    return 0; }
