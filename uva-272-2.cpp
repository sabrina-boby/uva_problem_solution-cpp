#include<iostream>
using namespace std;
int main()
{
    char a;
    int i=0,flag=1;

    while(scanf("%c",&a)!=EOF)
    {
        if(a=='"' && flag==1)
        {
            cout<<"``";
            flag=0;
        }
        else if(a=='"' && flag==0)
        {
            cout<<"''";
            flag=1;
        }
        else
        {
            cout<<a;
        }
    }
}
