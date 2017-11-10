#include<bits/stdc++.h>
using namespace std;
#define MAX 20000005
bool marked [MAX];
int prime_list [MAX];
//int twine_prime[];
int final_list[1000005][2];
void sieve()
{
    int i,j,k,l,m,n;
    memset(marked,true,sizeof marked);
    marked[1]=false;
    marked[2]=true;
    for(i=4;i<=MAX;i+=2)
        marked[i]=false;
    for(i=3;i*i<=MAX;i+=2)
    {
        if(marked[i])
        {
            for(j=i*i;j<=MAX;j+=i)
                marked[j]=false;
        }
    }
    m=0;
    for(i=1;i<=MAX;i++)
    {
        if(marked[i])
            prime_list[m++]=i;
    }
    /*printf("Prime List : \n");
    for(i=0;i<m;i++)
        cout<<"at index "<<i<<" number is "<<prime_list[i]<<endl;*/
    k=1;
    int a;
    for(i=0;i<m-1;i++)
    {
        //cout<<prime_list[i+1]<<" "<<prime_list[i]<<endl;
        a = prime_list[i+1]-prime_list[i];
        //cout<<"dif is "<<a<<endl;
        if(a==2)
        {
            final_list[k][0]=prime_list[i];
            final_list[k][1]=prime_list[i+1];
            k++;
            //twine_prime[k++]=prime_list[i];
            //twine_prime[k++]=prime_list[i+1];
            //k++;
            //cout<<"i is "<<i<<endl;
        }
    }
    /*printf("Twine prime List :\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<2;j++)
            cout<<final_list[i][j]<<" ";
        cout<<endl;
    }
        //cout<<twine_prime[i]<<" "<<twine_prime[i+1]<<endl;
        //cout<<prime_list[i]<<endl;*/

}
int main()
{
    sieve();
    int i,j,k,l,m,n;
    while(cin>>n)
    {
        //printf("(");
        for(i=0;i<2;i++)
        {
            if(i==0)
                printf("(%d, ",final_list[n][i]);
            else printf("%d)\n",final_list[n][i]);
        }
    }
    return 0;
}
