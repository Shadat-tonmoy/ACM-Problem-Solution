#include<bits/stdc++.h>
using namespace std;
int capacity,n,sz=0,weight[55],price[55],dp[55][55];
char str[50];
bool possible;
int _fn(int i,int w)
{
    //printf("i is %d and w is %d\n",i,w);
    if(i>sz)
        return 0;
    if(w>=capacity)
    {
        //printf("w>=capacity");
        if(w==capacity)
        {
            possible=true;
            return 0;
        }
        else if(w>capacity)
        {
            return 0;
        }
    }
    if(dp[i][w]!=-1)
    {
        //printf("%d\n",dp[i][w]);
        return dp[i][w];
    }
    int p1=0,p2=0;
    //printf("p1 is %d p2 is %d\n",p1,p2);
    if(w+weight[i]<=capacity)
    {
        p1 = weight[i] + _fn(i+1,w+weight[i]);
        //printf("P1 is %d\n",p1);
    }
    p2 = _fn(i+1,w);
    //printf("P2 is %d\n",p2);
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}
void process()
{
    int i,j=0,k,l=0,m,n;
    char tmp[100];
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            tmp[j]=str[i];
            j++;
        }
        else
        {
            tmp[j]='\0';
            n=0;
            for(k=0; k<j; k++)
            {
                n = n*10;
                n = n+ tmp[k]-'0';
            }
            weight[sz]=n;
            sz++;
            j=0;
            n=0;
        }
    }
    tmp[j]='\0';
    for(k=0; k<j; k++)
    {
        n = n*10;
        n = n+ tmp[k]-'0';
    }
    weight[sz]=n;
    sz++;
}
int main()
{
    int i,j,k,l,m,tc,w,sum,x;
    while(cin>>tc)
    {
        getchar();
        for(x=1; x<=tc; x++)
        {
            gets(str);
            sum=0;
            sz = 0;
            process();
            for(i=0; i<sz; i++)
            {
                sum+=weight[i];
            }
            if(sum%2==0)
            {
                capacity=sum/2;
                //printf("Capacity is %d\n",capacity);
                possible=false;
                memset(dp,-1,sizeof dp);
                int ans = _fn(0,0);
                if(possible)
                    printf("YES\n");
                else printf("NO\n");
                //cout<<ans<<endl<<possible<<endl;
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
/*
2
3
72 17
44 23
31 24
1
26


*/
