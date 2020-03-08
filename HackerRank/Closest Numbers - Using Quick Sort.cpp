#include<bits/stdc++.h>
using namespace std;

int partition(int A[],int start,int end)
{
    int pindex = start;
    int pivot = A[end];
    int i;
    for(i=start;i<end;i++)
    {
        if(A[i]<pivot)
        {
            swap(A[i],A[pindex]);
            pindex++;
        }
    }
    swap(A[pindex],A[end]);
    return pindex;
}

void quickSort(int A[],int start,int end)
{
    if(start<end)
    {
        int pindex = partition(A,start,end);
        quickSort(A,start,pindex-1);
        quickSort(A,pindex+1,end);
    }
}

int main()
{
    int i,j,k,l,m,n,tc,c,a,r_a,r_b,num[200009],simple,page,p,mini;
    while(cin>>n)
    {
        mini=99999999;
        for(i=0;i<n;i++)
            cin>>num[i];
        quickSort(num,0,n-1);
        for(i=0;i<n-1;i++)
        {
            mini = min(mini,abs(num[i]-num[i+1]));
        }

        for(i=0;i<n-1;i++)
        {
            if(abs(num[i]-num[i+1])==mini)
            {
                cout<<num[i]<<" "<<num[i+1]<<" ";
            }
        }
        cout<<endl;


        //cout<<mini<<endl;
    }
    return 0;
}
