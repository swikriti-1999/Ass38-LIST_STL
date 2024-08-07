#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1;
    int n, sum=0;
    cout<<"enter 5 elements "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>n;
        l1.push_back(n);
    }
    
    list<int>::iterator x;
    for(x=l1.begin(); x!=l1.end(); x++)
    {
        sum =sum + (*x);
    }
    cout<<"\n Summ of elements in list is "<<sum;
    return 0;
}