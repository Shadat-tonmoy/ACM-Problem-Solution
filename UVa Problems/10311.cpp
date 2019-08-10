#include<bits/stdc++.h>
using namespace std;
#define MAX 100000030
#define M 214748364
bool marked [MAX];
vector<int> p_list;
void sieve()
{
    int i,j,k;
    memset(marked,true,sizeof marked);
    marked[0]=false;
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
    k=0;
    for(i=1; i<=MAX; i++)
    {
        if(marked[i])
            p_list.push_back(i);//[k++]=i;
    }
    //for(i=0;i<p_list.size();i++)
    //  cout<<p_list[i]<<endl;
}
int main()
{
    int i,j,k,l,m,n,a,b,min_dif,dif,x,y;
    bool found = false;
    sieve();
    while(scanf("%d",&n)==1)
    {
        min_dif = 999999999;
        found = false;
        if (n%2==1)
        {
            if(marked[n-2])
            {
                printf("%d is the sum of 2 and %d.\n",n,n-2);

            }
            else
            {
                printf("%d is not the sum of two primes!\n",n);

            }
        }
        else
        {
            m=0;
            found = false;
            for(i=n/2; i<n; i++)
            {
                if(marked[(n/2)-m] && marked[i] && ((n/2)-m)!=i)
                {
                    printf("%d is the sum of %d and %d.\n",n,n-i,i);
                    found=true;
                    break;
                }
                m++;
            }
            if(!found)
                printf("%d is not the sum of two primes!\n",n);
        }


    }
    //100000000



    return 0;
}

