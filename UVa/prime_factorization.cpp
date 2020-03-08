#include<bits/stdc++.h>
#define MAX 99999999// 622658676
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
    for(i=2;i<=MAX;i++)
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
    set <int> :: iterator it_set;
    while(cin>>n)
    {
        int temp = n;
        for(i=0; p_list[i]<=n; i++)
        {
            //cout<<p_list[i]<<endl;
            if(p_list[i]==0)
                break;
            if(n%p_list[i]==0)
            {
                while(n%p_list[i]==0)
                {
                    power[p_list[i]]++;
                    cout<<p_list[i]<<endl;
                    n=n/p_list[i];
                }
            }
        }
        //if(n>1)

        printf("Prime factorization of %d is \n",temp);
        for(it=power.begin();it!=power.end();it++)
        {
            if(it==power.end())
                cout<<it->first<<"^"<<it->second<<"x";
            else cout<<it->first<<"^"<<it->second<<endl;
        }

        power.clear();
        factors.clear();

    }







    return 0;
}





