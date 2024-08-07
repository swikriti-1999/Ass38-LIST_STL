#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<char>li;
    for(char i='a';i<='e';i++)
    {
        li.push_back(i);
    }
    list<char>::const_iterator ct;
    for(ct=li.begin(); ct!=li.end();ct++)
    {
        cout<<*ct<<" ";
    }
    return 0;
}