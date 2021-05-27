#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        int d,m,y,D,M,Y,age;
        char a,b,A,B;
        cin>>d>>a>>m>>b>>y;
        cin>>D>>A>>M>>B>>Y;

        if(y<Y || y==Y && m<M || y==Y && m==M && d<=D)
        {
            cout<<"Case #"<<++s<<": "<<"Invalid birth date"<<endl;
        }
        else if(y==Y || d==D || m==M)
        {
            cout<<"Case #"<<++s<<": "<<0<<endl;
        }
        else
        {
            age=y-Y;
            if(age>130)
            {
                cout<<"Case #"<<++s<<": "<<"Check birth date"<<endl;
            }
            else
            {
                cout<<"Case #"<<++s<<": "<<age<<endl;
            }
        }
    }
}
