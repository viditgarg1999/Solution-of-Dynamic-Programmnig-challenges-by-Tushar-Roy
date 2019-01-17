#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,n1,n2;
    string s1,s2;
    cin>>s1>>s2;
    n2=s1.length();
    n1=s2.length();
    int a[n1+1][n2+1];
    for(i=0;i<n2+1;i++)
    {
        a[0][i]=0;
    }
    for(i=0;i<n1+1;i++)
    {
        a[i][0]=0;
    }
    for(i=1;i<n1+1;i++)
    {
        for(j=1;j<n2+1;j++)
        {
            int p;
                if(a[i-1][j]>a[i][j-1])
                    p=a[i-1][j];
                else
                    p=a[i][j-1];
            if(s2[i-1]!=s1[j-1])
            {
                a[i][j]=p;
            }
            else if(s2[i-1]==s1[j-1])
            {
                a[i][j]=p+1;
            }
        }
    }
    int n3=a[n1][n2];
    char s3[n3];

    int k=0;
    for(i=n1;i>=0;i--)
    {
        for(j=n2;j>=0;j--)
        {
            int p1;
                if(a[i-1][j]>a[i][j-1])
                    p1=a[i-1][j];
                else
                    p1=a[i][j-1];
            if(a[i][j]>p1)
            {
                s3[k++]=s2[j-1];
                cout<<i<<j<<s2[i-1]<<"\n";
                i--;

            }
        }
    }
   /* for(i=0;i<=n3;i++)
    {
        cout<<s3[i];
    }*/
    cout<<"\n";
    for(i=0;i<n1+1;i++)
    {
        for(j=0;j<n2+1;j++)
        {

            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
   // cout<<a[n1][n2];
    return 0;
}
