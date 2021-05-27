#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        int i,n;
        while(getline(cin,a))
        {
            string b="";
            if(a=="")
            {
                break;
            }
            n=a.length();
            for(i=0; i<n; i++)
            {
                if(a[i]=='0')
                {
                    b=b+'O';
                }
                else if(a[i]=='1')
                {
                    b=b+'I';
                }
                else if(a[i]=='2')
                {
                    b=b+'Z';
                }
                else if(a[i]=='3')
                {
                    b=b+'E';
                }
                else if(a[i]=='4')
                {
                    b=b+'A';
                }
                else if(a[i]=='5')
                {
                    b=b+'S';
                }
                else if(a[i]=='6')
                {
                    b=b+'G';
                }
                else if(a[i]=='7')
                {
                    b=b+'T';
                }
                else if(a[i]=='8')
                {
                    b=b+'B';
                }
                else if(a[i]=='9')
                {
                    b=b+'P';
                }
                else
                {
                    b=b+a[i];
                }
            }
            cout<<b<<endl;
        }
        if(t > 0 )
        {
            cout<<endl;
        }
    }
    return 0;
}
