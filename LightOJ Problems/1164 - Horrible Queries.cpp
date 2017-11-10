#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
struct data
{
    long long sum,prop;
} tree[MAX*3];
long long arr[MAX];
void build (long long node,long long b,long long e)
{
    long long left,right,mid;
    if(b==e)
    {
        tree[node].sum=arr[b];
        tree[node].prop=0;
        //printf("At node %d from %d to %d value is %d\n",node,b,e,tree[node].sum);
        return;
    }
    left = 2*node;
    right = left+1;
    mid = (b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node].sum = tree[left].sum + tree[right].sum;
    tree[node].prop = 0;
    //printf("At node %d from %d to %d value is %d\n",node,b,e,tree[node].sum);

}
void update (long long node,long long b,long long e,long long i,long long j,long long x)
{
    //cout<<node<<" "<<b<<" "<<e<<" "<<i<<" "<<j<<" "<<x<<endl;
    long long left,right,mid;
    if(i>e || j<b)
        return;
    if(b>=i && e<=j)
    {
        //printf("b is %d and i is %d and e is %d and j is %d\n",b,i,e,j);
        tree[node].sum+=((e-b)+1)*x;
        tree[node].prop+=x;
        return;
    }
    left = 2*node;
    right = (2*node)+1;
    mid = (b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum = tree[left].sum + tree[right].sum + ((e-b)+1)*tree[node].prop;
    //printf("at node %d value is %d\n",node,tree[node].sum);
}
long long query (long long node,long long b,long long e,long long i,long long j,long long carry=0)
{
    long long left,right,mid,p1,p2;
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
    {
        return tree[node].sum + ((e-b)+1)*carry;
    }
    left = 2*node;
    right = (2*node)+1;
    mid = (b+e)/2;
    p1 = query(left,b,mid,i,j,carry+tree[node].prop);
    p2 = query(right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}
int main ()
{
    long long i,j,k,l,m,n,x,y,cmd,v,ans,tc;
    scanf("%lld",&tc);
    for(l=1;l<=tc;l++)
    {
        scanf("%lld",&n);
        printf("Case %lld:\n",l);
        for(i=0; i<n; i++)
        {
            arr[i]=0;
        }
        build(1,0,n-1);

        //printf("End of Build Function\n");
        scanf("%lld",&m);
        for(i=1; i<=m; i++)
        {
            scanf("%lld",&cmd);
            if(cmd==0)
            {
                scanf("%lld %lld %lld",&x,&y,&v);
                update(1,0,n-1,x,y,v);
            }
            else
            {
                scanf("%lld %lld",&x,&y);
                ans = query(1,0,n-1,x,y);
                printf("%lld\n",ans);

            }
        }

    }



    return 0;
}
