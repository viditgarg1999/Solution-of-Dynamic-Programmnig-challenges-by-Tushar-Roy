#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j,t,s=0,p=0,k=0;
    cout<<"Enter the Number of elements in the Array :";
    cin>>n;
    int a[n],b[n][2];
    cout<<"Enter all the elements :"<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the target value :";
    cin>>t;

    sort(a,a+n);//To sort the array

    cout<<"\n";

    //Logic Implementation
    for(i=p+1;i<n;i++)
    {
        s=a[p]+a[i];
        if(a[p]+a[p+1]>t || a[p]>t || a[n-2]+a[n-1]<t)
            break;

        if(s==t)
        {
            b[k][0]=a[p];
            b[k][1]=a[i];
            k++;
        }

        if(i==n-1 || s>=t)
        {
            p++;
            i=p;
        }

    }

    cout<<"The Pairs are :"<<"\n";
    for(i=0;i<k;i++)
    {
        cout<<b[i][0]<<"+"<<b[i][1]<<"="<<t<<"\n"; //To print the output in the a+b=t form
    }
    return 0;

}
