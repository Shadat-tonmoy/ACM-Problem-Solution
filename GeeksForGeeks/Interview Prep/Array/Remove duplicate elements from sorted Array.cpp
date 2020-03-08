//https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int [],int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
int remove_duplicate(int A[],int n)
{
    int i,j,k,l,m=0;
    for(i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            // cout<<"m++ for "<<A[i]<<endl;
            for(j=i+1;j<n-1;j++)
                A[j]=A[j+1];
            n--;
            i--;
            
        }
    }
    // cout<<"M "<<m<<endl;
    return n;
//Your code here
}
