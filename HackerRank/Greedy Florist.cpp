#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
bool comp(int x,int y)
{
    return x>y;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,num[150],sum;
    while(cin>>n>>k)
    {
        map<int,int> freq;
        int f_index = 0;
        sum = 0;
        for(i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n,comp);
        for(i=0;i<n;i++)
        {
            sum+=(freq[f_index]+1)*num[i];
            freq[f_index]++;
            f_index++;
            if(f_index>=k)
                f_index=0;
        }
        cout<<sum<<endl;




    }


}












