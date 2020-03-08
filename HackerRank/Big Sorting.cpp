#include<bits/stdc++.h>
using namespace std;
string num[10000005];
void merge(string left[],string right[],string a[],int nL,int nR)
{
    int i=0,j=0,k=0;
    while(i<nL && j<nR)
    {
        if(left[i].length()<right[j].length())
        {
            a[k]=left[i];
            i++;
        }
        else if((left[i].length()==right[j].length()) && left[i].compare(right[j])<0)
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<nL)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<nR)
    {
        a[k]=right[j];
        j++;
        k++;
    }
}
void mergeSort(string a[],int n)
{
    if(n<2)
        return;
    int mid = n/2,i;
    string left[mid],right[n-mid];
    for(i=0;i<mid;i++)
        left[i]=a[i];
    for(i=mid;i<n;i++)
        right[i-mid]=a[i];

    mergeSort(left,mid);
    mergeSort(right,n-mid);
    merge(left,right,a,mid,n-mid);
}
int main()
{
    int i,j,k,l,m,n;
    string a,b;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        mergeSort(num,n);
        for(i=0;i<n;i++)
            cout<<num[i]<<endl;
    }

    return 0;
}
