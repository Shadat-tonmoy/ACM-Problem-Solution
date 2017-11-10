#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
struct node
{
    int times=0,an;
} tree[3*MAX];
int arr[MAX];
int ans;
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].times=0;
        //cout<<node<<" range : "<<b<<" - "<<e<<" "<<tree[node].times<<endl;
        return;
    }
    int left = 2*node;
    int right = left+1;
    int mid = (b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node].times=tree[left].times+tree[right].times;
    //cout<<node<<" range : "<<b<<" - "<<e<<" "<<tree[node].times<<endl;
}
void update(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return;
    if(b>=i && e<=j)
    {
        tree[node].times++;
        //cout<<node<<" "<<tree[node].times<<endl;
        return;
    }
    int left = 2*node;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
}
int query(int node,int b,int e,int i,int carry=0)
{
    if(i>e || i<b)
    {
        //cout<<"returned 0 for range "<<b<<"-"<<e<<endl;
        return 0;
    }

    if(b==i && e==i)
    {
        //cout<<"times "<<tree[node].times+carry<<endl;
        ans = tree[node].times+carry;
        return ans;
    }
    int left = 2*node;
    int right = left+1;
    int mid = (b+e)/2;
    //cout<<"node "<<node<<"left "<<left<<" right "<<right<<" begi "<<b<<" end "<<e<<endl;
    int p1 = query(left,b,mid,i,carry+tree[node].times);
    int p2 = query(right,mid+1,e,i,carry+tree[node].times);
    //cout<<"p1 : "<<p1<<" p2 "<<p2<<endl;
    //cout<<"return in rang "<<" begi "<<b<<" end "<<e<<endl;
    //return p1+p2;

}
int main()
{
    int i,j,k,l,m,n,a,b,c,d,tc,q,x,sz,qry;
    char op;
    char str[MAX];

    while(scanf("%d",&tc)==1)
    {
        //cout<<"tc : "<<tc<<endl;
        for(l=1; l<=tc; l++)
        {
            getchar();
            gets(str);
            //puts(str);
            sz = strlen(str);
            for(i=0; i<sz; i++)
            {
                arr[i+1]=str[i]-'0';
            }
            build(1,1,sz);
            /*for(i=1; i<=25; i++)
                cout<<i<<" "<<tree[i].val<<" "<<tree[i].times<<endl;
            cout<<"updated : "<<endl;
            for(i=1; i<=25; i++)
                cout<<i<<" "<<tree[i].val<<" "<<tree[i].times<<endl;*/
            scanf("%d",&qry);
            //cout<<"qry: "<<qry<<endl;
            printf("Case %d:\n",l);
            for(i=1; i<=qry; i++)
            {
                getchar();
                scanf("%c",&op);
                //printf("%c\n",op);
                if(op=='I')
                {
                    scanf("%d %d",&a,&b);
                    update(1,1,sz,a,b);
                    //cout<<"taken"<<endl;
                }
                else if(op=='Q')
                {
                    scanf("%d",&a);
                    //cout<<sz<<endl;
                    //cout<<"taken2"<<endl;
                    int as = query(1,1,sz,a,0);
                    if(ans%2==0)
                    {
                        printf("%d\n",arr[a]);
                    }
                    else
                    {
                        printf("%d\n",!arr[a]);
                    }
                    //cout<<ans<<endl;
                }
                //cout<<"i "<<i<<endl;
            }

        }
    }

    return 0;
}
