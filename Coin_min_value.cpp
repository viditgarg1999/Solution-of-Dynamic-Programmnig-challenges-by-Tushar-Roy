#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int v[n];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int a[n][12];
    for(i=0;i<n+1;i++)
    {
        a[i][0]=0;
    }
    for(i=1;i<12;i++)
    {
        a[0][i]=i/v[0];
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<12;j++)
        {
            int p=j%v[i];
            int p1=j/v[i]+a[i-1][p];
            if(p1>a[i-1][j])
                a[i][j]=a[i-1][j];
            else
                a[i][j]=p1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<12;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
