#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
int num[100005];
int main()
{
    int i,j,k,l,m,n,a,b,c,cmax,n_swap,swap_index;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num,num+n);
        int sum = 0;
        c=0;
        i=0;
        while(sum<k)
        {
            sum+=num[i];
            i++;
        }
        cout<<--i<<endl;

    }




}
