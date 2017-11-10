#include<bits/stdc++.h>
#define MAX 100005
#define inf 999999
using namespace std;
struct node {
    int mx=0,mn=99999999;
}tree[MAX*3];
int arr[MAX];
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].mx=arr[b];
        tree[node].mn=arr[b];
        //cout<<node<<" "<<"range : "<<b<<" -> "<<e<<" "<<tree[node].mx<<" "<<tree[node].mn<<endl;
        return;
    }
    int left = 2*node;
    int right = left+1;
    int mid = (b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node].mx=max(tree[left].mx,tree[right].mx);
    tree[node].mn=min(tree[left].mn,tree[right].mn);
    //cout<<node<<" "<<"range : "<<b<<" -> "<<e<<" "<<tree[node].mx<<" "<<tree[node].mn<<endl;
}
node query(int node,int b,int e,int i,int j)
{
    struct node n;
    if(i>e || j<b)
    {
        n.mx = 0;
        n.mn = inf;
        //cout<<"out range : "<<b<<" - "<<e<<" returned "<<n.mx<<" "<<n.mn<<endl;
        return n;
    }
    if(b>=i && e<=j)
    {
        n.mx=tree[node].mx;
        n.mn=tree[node].mn;
        //cout<<"in range : "<<b<<" - "<<e<<endl;
        return n;
    }
    int left = 2*node;
    int right = left+1;
    int mid = (b+e)/2;
    struct node p1 = query(left,b,mid,i,j);
    struct node p2 = query(right,mid+1,e,i,j);
    {
        n.mx = max(p1.mx,p2.mx);
        n.mn = min(p1.mn,p2.mn);
        return n;
    }
}

int main()
{
    int i,j,k,l,m,n,a,b,c,d,tc,q,x,sz,qry,lwr,upr,ans,maxi;
    node ret;
    while(scanf("%d",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            scanf("%d %d",&n,&d);
            for(i=1;i<=n;i++)
                scanf("%d",&arr[i]);
            build(1,1,n);
            lwr=1;
            upr=d;
            maxi = 0;
            for(i=1;i<=n-d;i++)
            {
                ret = query(1,1,n,lwr,upr);
                //cout<<ret.mx<<" "<<ret.mn<<endl;
                lwr++;
                upr++;
                ans = ret.mx-ret.mn;
                maxi=max(maxi,ans);
            }
            printf("Case %d: %d\n",l,maxi);
            //cout<<maxi<<endl;
        }
    }



    return 0;
}
