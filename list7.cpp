#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1 = {1,2,3,4,5};
    l1.push_front(6);
    l1.push_back(6);
    list<int>::iterator x;
    for(x=l1.begin(); x!=l1.end(); x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}