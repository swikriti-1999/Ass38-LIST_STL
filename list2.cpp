#include<iostream>
#include<bits/stdc++.h>

int main()
{
   std:: list<int>l1;
    for(int i=1;i<6;i++)
    {
        l1.push_back(i*10);
    }
    std::list<int>::iterator x;
    for(x=l1.begin(); x!=l1.end();x++)
    {
        std::cout<<*x<<" ";
    }
    return 0;
}