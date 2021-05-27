#include<iostream>
using namespace std;
int main()
{
    string a;
    int count,i,hishab,flag;
    while(getline(cin,a))
    {
        count=0,hishab=0,flag=0;
        while(a[count]!='\0')
        {
            count++;
        }
        for(i=0; i<count; i++)
        {
            if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
            {
                flag=1;
            }
            else
            {
                hishab=hishab+flag;
                flag=0;
            }
        }
        cout<<hishab+flag<<endl;
    }
}


/*



#include<iostream>
using namespace std;
int main()
{
    string a;
    int count,i,hishab,hishab2,flag;
    while(getline(cin,a))
    {
        count=0,hishab=0,flag=0;
        while(a[count]!='\0')
        {
            count++;
        }
        for(i=0; i<count; i++)
        {
            if('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z')) && (a[i+1]==' ') && (flag==0))
            {
                hishab++;
                flag==1;
                cout<<a[i]<<","<<endl;
            }
            else if(a[i]==' ' && (('a'<=a[i+1] && a[i+1]<='z') || ('A'<=a[i+1] && a[i+1]<='Z')))
            {
                hishab++;
                cout<<a[i+1]<<endl;
            }
        }
        cout<<" = "<<hishab<<endl;
    }
}






*/


/*

#include<iostream>
using namespace std;
int main()
{
    string a;
    int count,i,hishab;
    while(getline(cin,a))
    {
        count=0,hishab=0;
        while(a[count]!='\0')
        {
            count++;
        }
        for(i=0; i<count; i++)
        {
            if(a[i]==' ' && 'a'<=a[i+1] && a[i+1]<='z' || 'A'<=a[i+1] && a[i+1]<='Z')
            {
                hishab++;
            }
        }
        cout<<hishab+1<<endl;
    }
}


*/












/*#include<iostream>
using namespace std;
int main()
{
    string a;
    int count,i,hishab,hishab2;
    while(getline(cin,a))
    {
        count=0,hishab=1,hishab2=0;
        while(a[count]!='\0')
        {
            count++;
        }
        for(i=0; i<count; i++)
        {
            if(a[i]==' ' && 'a'<=a[i+1] && a[i+1]<='z' || 'A'<=a[i+1] && a[i+1]<='Z')
            {
                hishab++;
            }
            else
            {
                hishab2=0;
            }
        }
        if(hishab>=1)
        {
            cout<<hishab<<endl;
        }
        else
        {
            cout<<hishab2<<endl;
        }
    }
}
*/
