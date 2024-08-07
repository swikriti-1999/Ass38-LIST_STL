#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1 = {1,2,2,3,4,5};
    list<int>::iterator x;

    for(x=l1.begin(); x!=l1.end();x++)
    {
        cout<<*x;
    }
    l1.remove(2);
    for(x=l1.begin(); x!=l1.end();x++)
    {
        cout<<*x;
    }
    
    return 0;
}