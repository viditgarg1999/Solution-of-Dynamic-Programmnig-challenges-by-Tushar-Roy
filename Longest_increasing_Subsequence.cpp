#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the length of the Series";
    cin>>n;
    cout<<"Enter the values";
    int a[n],p[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        p[i]=1;
    }
    i=1;
    for(j=0;j<n;j++)
    {
        if(i<n)
        {
        if(a[j]<a[i])
        {
            if(p[j]<p[i])
                p[i]=p[i];
            else if(p[j]>=p[i])
                p[i]=p[j]+1;
        }
        if(j+1==i)
        {
            i=i+1;
            j=0;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<p[i];
    }

    return 0;
}
