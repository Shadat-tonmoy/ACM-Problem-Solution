#include<bits/stdc++.h>
using namespace std;
#define MAX 32020
#define M 32020
bool marked [M];
int p_list [M];
vector <int> divs[M];
void sieve()
{
    long long int i,j,k;
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
    k=0;
    for(i=1; i<=MAX; i++)
    {
        if(marked[i])
            p_list[k++]=i;
    }
    /*for(i=0;i<k;i++)
        cout<<p_list[i]<<endl;*/
}
int main()
{
    long long int i,j,k,l,m=0,n,x,y,a;
    vector <int> sec[200];
    sieve();
    for(i=0; p_list[i]<=32000;)
    {

        if((p_list[i+1]-p_list[i])==(p_list[i+2]-p_list[i+1]))
        {
            a = p_list[i+1]-p_list[i];
            while((p_list[i+1]-p_list[i])==a)
            {
                sec[m].push_back(p_list[i]);
                i++;
            }
            k=i-1;
            if(p_list[i]-p_list[k]==a)
                sec[m].push_back(p_list[i]);
            m++;
        }
        else i++;
    }
    //for(i=0;i<m;i++)
        //cout<<sec[i][0]<<endl;
    //cout<<sec[0][0]<<endl;
    while(cin>>x>>y)
    {
        bool found = false;
        if(x==0 && y==0)
            break;
        if(x>y)
            swap(x,y);
        for(i=0;i<m;i++)
        {
            //cout<<"i : "<<sec[i][0]<<endl;
            if(sec[i][0]>=x && sec[i][0]<=y)
            {
                for(j=0;j<sec[i].size();j++)
                {
                    //cout<<"F : " <<sec[i][j]<<endl;
                    if(sec[i][j]>y)
                    {
                        found = true;
                        break;
                    }
                }
                if(found)
                    break;
                for(j=0;j<sec[i].size();j++)
                {
                    if(j==sec[i].size()-1)
                        printf("%d\n",sec[i][j]);
                    else printf("%d ",sec[i][j]);//cout<<sec[i][j]<<" ";

                }
            }
            if(sec[i][0]>y)
                break;
        }
    }
    return 0;
}
