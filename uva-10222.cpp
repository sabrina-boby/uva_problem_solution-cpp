#include<iostream>
using namespace std;
int main()
{
    char a[]= {'1','2','3','4','5','6','7','8','9','0','-','=',
               'q','w','e','r','t','y','u','i','o','p','[',']','\\',
               'a','s','d','f','g','h','j','k','l',';','\'',
               'z','x','c','v','b','n','m',',','.','/',
              };
    char k;
    string b,c="";
    int n,i,j,flag=0;
    getline(cin,b);
    n=b.length();
    for(i=0; i<n; i++)
    {
        if('A'<=b[i] && b[i]<='Z')
        {
            b[i]=b[i]+32;
        }
        k=b[i];
        for(j=0; j<46; j++)
        {
            flag=0;
            if(b[i]==a[j])
            {
                c=c+a[j-2];
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            c=c+k;
        }
    }
    cout<<c<<endl;
}
