#include<bits/stdc++.h>
using namespace std;
void partition(int A[],int start,int end)
{
    int i,pivot=A[start],pindex=start;
    for(i=start;i<=end;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pindex]);
            if(i<end)
                pindex++;
        }
    }
    //cout<<pindex<<" "<<A[pindex]<<endl;
    while(A[pindex]>=pivot)
    {
        pindex--;
        if(pindex<0)
        {
            pindex=0;
            break;
        }
    }

    //cout<<pindex<<" "<<A[pindex]<<endl;
    swap(A[pindex],A[start]);


}
int main()
{
    int i,j,k,l,m,n,num[10000];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        partition(num,0,n-1);
        for(i=0;i<n;i++)
            cout<<num[i]<<" ";
        cout<<endl;
    }


    return 0;
}
