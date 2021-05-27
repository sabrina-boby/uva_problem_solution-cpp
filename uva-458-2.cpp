#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i;
    char y;
    while(getline(cin,a))
    {
        for(auto x: a)
        {
            y=x-7;
            cout<<y;
        }
        puts("");
    }
    return 0;
}
