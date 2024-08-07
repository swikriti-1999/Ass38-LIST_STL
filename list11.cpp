#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1 = {1,2,3,4,5};
    list<int>l2;
    l2 = l1;
    list<int>::iterator x;
    for(x = l2.begin(); x!= l2.end(); x++)
    {
        cout<<*x<<" ";
    }


    return 0;
}