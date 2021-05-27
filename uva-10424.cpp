#include<bits/stdc++.h>
#include<iomanip>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    string a,b;
    while(getline(cin,a) && getline(cin,b))
    {
        int p,sum=0,sum2=0,r,count=0,count2=0;
        float m;
        for(auto x: a)
        {
            if('a'<=x && x<='z')
            {
                p=x-'a';
                sum=sum+(p+1);
            }
            else if('A'<=x && x<='Z')
            {
                p=x-'A';
                sum=sum+(p+1);
            }
        }
        while(1)
        {
            count=0;
            while(sum!=0)
            {
                r=sum%10;
                sum=sum/10;
                count=count+r;
            }
            if(count<10)
            {
                break;
            }
            sum=count;
        }
        for(auto x: b)
        {
            if('a'<=x && x<='z')
            {
                p=x-'a';
                sum2=sum2+(p+1);
            }
            else if('A'<=x && x<='Z')
            {
                p=x-'A';
                sum2=sum2+(p+1);
            }
        }
        while(1)
        {
            count2=0;
            while(sum2!=0)
            {
                r=sum2%10;
                sum2=sum2/10;
                count2=count2+r;
            }
            if(count2<10)
            {
                break;
            }
            sum2=count2;
        }
        if(count<count2)
        {
            m=100.00/count2;
            cout<<fixed<<setprecision(2)<<m*count<<" %"<<endl;
        }
        else
        {
            m=100.00/count;
            cout<<fixed<<setprecision(2)<<m*count2<<" %"<<endl;
        }
    }
}
