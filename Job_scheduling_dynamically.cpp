#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the number of cases";
    cin>>n;
    cout<<"Enter the Start, end time and value";
    int I[n],E[n],V[n];
    for(i=0;i<n;i++)
    {
        cin>>I[i]>>E[i]>>V[i];
    }
    int lm[n];
    for(k=0;k<n;k++)
    {
        int s=V[k];
        int p=I[k];
        int q=E[k];
        for(i=k+1;i<n;i++)
        {
            if(I[i]>=q)
            {
                s=s+V[i];
                q=E[i];
            }
        }
        lm[k]=s;
    }
    for(i=0;i<k;i++)
    {
        cout<<lm[i]<<"\t";
    }
    return 0;
}
