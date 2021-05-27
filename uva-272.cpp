#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    int count=0;
    while(scanf("%c",&x)!=EOF)
    {
        if(x=='\"' && count==0)
        {
            cout<<"``";
            count=1;
        }

        else if(x=='\"' && count==1)
        {
            cout<<"''";
            count=0;
        }
        else
        {
            cout<<x;
        }
    }
}
