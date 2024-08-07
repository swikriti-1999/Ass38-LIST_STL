#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1 = {1,2,3,4,5};
    list<int>l2 = {6,7,8,9,10};

    l1.merge(l2);

    list<int>::iterator x;
    for(x = l1.begin(); x!= l1.end(); x++)
    {
        cout<<*x<<" "; 
    }
    
    return 0;
}