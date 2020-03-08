#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
long long int num[MAX],profit,loss,visited=0;;
void reset()
{
    visited = 0;
        
}
void solve(long long int pos,long long int n)
{
    if(pos>=12)
    {
        visited = 1;
        return;
    }
    if(visited)
        return;
    num[pos] = n;
    if(pos>=4)
    {
        long long int i = pos;
        long long int to = pos-4,sum=0;
        for(i=pos;i>=to;i--)
        {
            sum+=num[i];
        }
        if(sum>0)
        {
            return;
        }
    }
    solve(pos+1,profit);
    solve(pos+1,-loss);
    
}

int main() 
{
    while(cin>>profit>>loss)
    {
        reset();
        solve(-1,profit);
        // cout<<"Result"<<endl;
        long long int ans =0;
        for(int i=0;i<12;i++)
        {
            ans+=num[i];
            // cout<<num[i]<<endl;
        }
        if(ans>0)
            cout<<ans<<endl;
        else printf("Deficit\n");
            
    }
  
}