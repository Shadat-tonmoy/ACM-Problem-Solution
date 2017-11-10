#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
bool marked[MAX];
int p_list[MAX];
map <int, int> power;
void sieve()
{
    int i,j,l,m,k=0;
    memset(marked,true,sizeof marked);
    marked[1]=false;
    marked[2]=true;
    for(i=4; i<=MAX; i+=2)
        marked[i]=false;
    for(i=3; i*i<=MAX; i+=2)
    {
        if(marked[i])
        {
            for(j=i*i; j<=MAX; j+=i)
                marked[j]=false;
        }
    }
    for(i=2; i<=MAX; i++)
    {
        if(marked[i])
        {
            p_list[k++]=i;
        }
    }
    /*for(i=0; i<k; i++)
        cout<<p_list[i]<<endl;*/

}
int main()
{
    int i,j,k,l,m,n,a,b;
    sieve();
    map <int, int> power;
    map <int, int> :: iterator it;
    set <int> factors;
    set <int> :: iterator ft;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int temp = n;
        for(i=0; p_list[i]<=n; i++)
        {
            if(p_list[i]==0)
                break;
            //cout<<p_list[i]<<endl;
            if(n%p_list[i]==0)
            {

                while(n%p_list[i]==0)
                {
                    factors.insert(p_list[i]);
                    //if(!found[p_list[i]])
                        //cout<<p_list[i]<<endl;
                    n=n/p_list[i];
                    //found[p_list[i]]=true;
                }
            }
        }
        if(n>1)
            factors.insert(n);
        int ans = temp;
        for(ft=factors.begin();ft!=factors.end();ft++)
        {
            int num = *ft;
            ans = ans/num * (num-1);
            //cout<<num<<endl;
        }
        //printf("Ans : ");
        printf("%d\n",ans);
        //cout<<ans<<endl;
        power.clear();
        factors.clear();

    }







    return 0;
}

