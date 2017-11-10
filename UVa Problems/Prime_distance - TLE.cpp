#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int lis[MAX];
bool marked[MAX];
map <int,int> prime_list;
void sieve ()
{
    int i,j,k,l,m=0,n;

    memset(marked,true,sizeof marked);
    marked[1]=false;
    for(i=4; i<=MAX; i+=2)
        marked[i]=false;
    for(i=3; i*i<=MAX; i+=2)
    {
        if(marked[i]==true)
        {
            for(j=i*i; j<=MAX; j+=i)
                marked[j]=false;
        }
    }
    for(i=1; i<=MAX; i++)
    {
        if(marked[i])
            prime_list[i]=i;
    }
    //for(i=0;i<m;i++)
}
int main()
{
    int i,j=0,k,l,m,n,a,final_list[MAX],min_a,min_b,max_a,max_b,min_dif,max_dif;
    sieve();
    while(cin>>m>>n)
    {
        min_dif = 999999999;
        max_dif = 0;
        j=0;
        for(i=m; i<=n; i++)
        {
            if(prime_list[i]!=0)
                final_list[j++]=i;
        }
        //cout<<j<<endl;
        //for(i=0; i<j; i++)
        //cout<<final_list[i]<<endl;
        //cout<<endl;
        if(j==0 || j==1)
        {
            printf("There are no adjacent primes.\n");
        }
        else
        {
            for(i=0; i<j-1; i++)
            {
                a = final_list[i+1]-final_list[i];
                if(a>max_dif)
                {
                    max_dif = a;
                    max_a = final_list[i];
                    max_b = final_list[i+1];
                }
                if(a<min_dif)
                {
                    min_dif = a;
                    min_a = final_list[i];
                    min_b = final_list[i+1];
                }

            }
            printf("%d,%d are closest, %d,%d are most distant.\n",min_a,min_b,max_a,max_b);
            //cout<<"MAX : "<<max_a<<" "<<max_b<<endl;
            //cout<<"MIN : "<<min_a<<" "<<min_b<<endl;
        }

    }



    //cout<<final_list[i]<<endl;
}
