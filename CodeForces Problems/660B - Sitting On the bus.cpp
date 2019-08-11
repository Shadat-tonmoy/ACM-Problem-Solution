#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,w_l[1000],w_r[1000],n_l[1000],n_r[1000];
    while(cin>>n>>m)
    {
        j=0;
        k=0;
    for(i=1;i<=m;i++)
    {
        if(j<n)
        {
            w_l[j]=i++;
            if(i>m)
                break;
            w_r[j]=i;
            j++;
        }
        else
        {
            n_l[k]=i++;
            if(i>m)
                break;
            n_r[k]=i;
            k++;
        }

    }
    for(i=0;i<n;i++)
    {
        if(n_l[i]!=0)
            cout<<n_l[i]<<" ";
        if(w_l[i]!=0)
            cout<<w_l[i]<<" ";
        if(n_r[i]!=0)
            cout<<n_r[i]<<" ";
        if(w_r[i]!=0)
            cout<<w_r[i]<<" ";
    }
    cout<<endl;



    }




}
