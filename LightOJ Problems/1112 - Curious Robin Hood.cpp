#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int tree [3000000];
void build (int n,int b,int e)
{
    if(b==e)
    {
        tree[n]=arr[b];
        return;
    }
    int l = 2*n;
    int r = (2*n)+1;
    int m = (b+e)/2;
    build(l,b,m);
    build(r,m+1,e);
    tree[n]=tree[l]+tree[r];
    //printf("l : %d\n",l);
    //printf("r : %d\n",r);
}
int query (int n,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;
    if (b>=i && e<=j)
    {
        return tree[n];
    }
    int l=2*n;
    int r=(2*n)+1;
    int m=(b+e)/2;
    int p1 = query(l,b,m,i,j);
    int p2 = query(r,m+1,e,i,j);
    return p1+p2;
}
void del(int node, int b, int e, int i)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)
    {
        tree[node]=0;
        return;
    }
    int l = 2*node;
    int r = (2*node)+1;
    int m = (b+e)/2;
    del(l,b,m,i);
    del(r,m+1,e,i);
    tree[node]=tree[l]+tree[r];
}
void add(int node, int b, int e, int i, int n)
{
    if(b>i || e<i)
        return;
    if(b>=i && e<=i)
    {
        tree[node]+=n;
        return;
    }
    int l = 2*node;
    int r = (2*node)+1;
    int m = (b+e)/2;
    add(l,b,m,i,n);
    add(r,m+1,e,i,n);
    tree[node]=tree[l]+tree[r];
}
int main()
{
    int i,j,k,l,m,n,tc,q,sack,cmd,v,x,y,ans;
    while(scanf("%d",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {

            scanf("%d %d",&n,&q);
            for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
            build(1,0,n-1);
            printf("Case %d:\n",l);
            /*for(i=1;i<=9;i++)
                printf("i = %d, tree[%d]=%d\n",i,i,tree[i]);*/
            for(k=1;k<=q;k++)
            {
                scanf("%d",&cmd);
                if(cmd==1)
                {
                    scanf("%d",&sack);
                    ans = query(1,0,n-1,sack,sack);
                    printf("%d\n",ans);
                    //arr[sack]=0;
                    del(1,0,n-1,sack);
                    /*cout<<"ARR : \n";
                    for(i=0;i<n;i++)
                        printf("%d ",arr[i]);
                    printf("\n");
                    for(i=1;i<=9;i++)
                        printf("i = %d, tree[%d]=%d\n",i,i,tree[i]);*/
                }
                else if (cmd==2)
                {
                    scanf("%d %d",&m,&v);
                    add(1,0,n-1,m,v);
                    /*cout<<"ARR : \n";
                    for(i=0;i<n;i++)
                        printf("%d ",arr[i]);
                    printf("\n");
                    for(i=1;i<=9;i++)
                        printf("i = %d, tree[%d]=%d\n",i,i,tree[i]);*/
                }
                else if (cmd==3)
                {
                    scanf("%d %d",&x,&y);
                    ans = query(1,0,n-1,x,y);
                    printf("%d\n",ans);

                }

            }

        }
    }







    return 0;
}
