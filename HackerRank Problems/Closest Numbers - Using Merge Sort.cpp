#include<bits/stdc++.h>
using namespace std;

void merge(int A[],int left[],int right[],int nL,int nR)
{
    int i=0,j=0,k=0;
    while(i<nL && j<nR)
    {
        if(left[i]<right[j])
        {
            A[k] = left[i];
            i++;
        }
        else
        {
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<nL)
    {
        A[k]=left[i];
        i++;
        k++;
    }
    while(j<nR)
    {
        A[k]=right[j];
        j++;
        k++;
    }

}
void mergeSort(int A[],int n)
{
    if(n<2)
        return;
    int mid = n/2;
    int left[mid],right[n-mid];
    int i,j,k;
    for(i=0;i<mid;i++)
        left[i]=A[i];
    for(i=mid;i<n;i++)
        right[i-mid]=A[i];
    mergeSort(left,mid);
    mergeSort(right,n-mid);
    merge(A,left,right,mid,n-mid);
}

int main()
{
    int i,j,k,l,m,n,tc,c,a,r_a,r_b,num[200009],simple,page,p,mini;
    while(cin>>n)
    {
        mini=99999999;
        for(i=0;i<n;i++)
            cin>>num[i];
        mergeSort(num,n);
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
