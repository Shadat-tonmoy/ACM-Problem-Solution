#include<bits/stdc++.h>
using namespace std;
long long int mi=99999999999;
long long int arr[100005];
long long int tree[3000000];
void build (long long int node,long long int b,long long int e)
{
    if(b==e)
    {
        tree[node]=min(mi,arr[b]);
        return;
    }
    long long int left = 2*node;
    long long int right = (2*node)+1;
    long long int mid = (b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
long long int query (long long int node,long long int b,long long int e,long long int i,long long int j)
{
    if(i>e || j<b)
        return mi;
    if(b>=i && e<=j)
    {
        return min(mi,tree[node]);
    }
    long long int left = 2*node;
    long long int right = (2*node)+1;
    long long int mid = (b+e)/2;
    long long int p1 = query(left,b,mid,i,j);
    long long int p2 = query(right,mid+1,e,i,j);
    return min(p1,p2);
}
/*void update(int node,int b,int e,int i,int newv)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)
    {
        tree[node]=newv;
        return;
    }
    int left = 2*node;
    int right = (2*node)+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,newv);
    update(right,mid+1,e,i,newv);
    tree[node]=tree[left]+tree[right];
}*/
int main()
{
    long long int i,j,k,l,m,n,tc,q,a,b;
    while(scanf("%lld",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            scanf("%lld %lld",&n,&q);
            for(i=1; i<=n; i++)
                scanf("%lld",&arr[i]);
            build(1,1,n);
            printf("Case %lld:\n",l);
            for(i=1; i<=q; i++)
            {
                scanf("%lld %lld",&a,&b);
                k = query(1,1,n,a,b);
                printf("%lld\n",k);
            }


        }
    }

    return 0;
}
