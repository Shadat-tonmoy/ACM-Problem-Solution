#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int num[100005],sorted_num[100005];
int main()
{
    int i,j,k,l,m,n,a,b,c,cmax,n_swap,swap_index;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            sorted_num[i] = num[i];
        }
        sort(sorted_num,sorted_num+n,comp);
        swap_index = 0;
        n_swap = 0;
        for(i=0;i<n;i++)
        {
            if(num[i]==sorted_num[swap_index] && n_swap<k)
            {
                if(i!=swap_index)
                {
                    n_swap++;
                    swap(num[i],num[swap_index]);
                }
                swap_index++;
                i=swap_index-1;
            }
        }

        cout<<"OO"<<endl<<endl<<endl;
        for(i=0;i<n;i++)
            cout<<num[i]<<" ";
        cout<<endl;

    }




}
