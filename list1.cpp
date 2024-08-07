#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1;
    for(int i=1;i<6;i++)
    {
        l1.push_back(i*10);
    }
    cout<<"Push Back"<<endl;
    list<int>::iterator x;
    for(x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    cout<<"Push Front"<<endl;
    list<int>l2;
    for(int i=1;i<6;i++)
    {
        l2.push_front(i*10);
    }
    list<int>::iterator x1;
    for(x1=l2.begin();x1!=l2.end();x1++)
    {
        cout<<*x1<<" ";
    }
    return 0;
}