#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,x,y,z,cost;
    priority_queue <int> q;
    while(scanf("%d",&n)==1)
    {
        cost=0;
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            cin>>m;
            q.push(-m);
        }
        while(q.size()>1)
        {
            x=q.top();
            q.pop();
            y=q.top();
            q.pop();
            z=x+y;
            q.push(z);
            cost+=abs(z);
        }
        cout<<cost<<endl;
        while(!q.empty())
            q.pop();


    }
    return 0;
}

