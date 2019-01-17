#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,n,k;
    n=s.length();
    int a[n][n];
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            j=i+k;
            if(k==0)
            {
                a[i][j]=1;
            }
            else
            {
            if(s[i]==s[j])
            {
                int p;
                if(a[i][j-1]>a[i+1][j])
                    p=a[i][j-1];
                else
                    p=a[i+1][j];
                a[i][j]=p+2;
            }
            if(s[i]!=s[j])
            {
                int p;
                if(a[i][j-1]>a[i+1][j])
                    p=a[i][j-1];
                else
                    p=a[i+1][j];
                a[i][j]=p;
            }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
