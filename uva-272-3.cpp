#include<iostream>
using namespace std;
int main()
{
    string a,b;
    int count=0,i,flag=1;
    getline(cin,a);

    count=a.length();

    for(i=0; i<count; i++)
    {
        if(a[i]=='"' && flag==1)
        {
            cout<<"``";
            flag=0;
        }
        else if(a[i]=='"' && flag==0)
        {
            cout<<"''";
            flag=1;
        }
        else
        {
            cout<<a[i];
        }
    }

}
