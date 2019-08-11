#include<bits/stdc++.h>
using namespace std;
char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector <char> result;
int taken[27]={0},n,k,m=0;
void backtrack()
{
    int i,j;
    if(result.size()==n)
    {
        for(i=0;i<result.size();i++)
            printf("%c",result[i]);
        printf("\n");
        m++;
        return;
    }
    for(i=0;i<n;i++)
    {
        if(!taken[i])
        {
            taken[i]=1;
            result.push_back(str[i]);
            if(m==k)
                return;
            backtrack();
            taken[i]=0;
            result.pop_back();
        }
    }


}
int main()
{
    int i,tc,l;
    while(scanf("%d",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            scanf("%d %d",&n,&k);
            m=0;
            printf("Case %d:\n",l);
            backtrack();
            result.clear();
            memset(taken,0,sizeof taken);

        }

    }
    return 0;
}
