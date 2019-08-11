#include<bits/stdc++.h>
using namespace std;
#define MAX 999999999999
typedef pair <long long int,long long int> key;
vector<long long int> graph[100000];
vector<long long int> storage;
map <key,long long int> cost;
map <int,bool> check;
int main()
{
    long long int i,j,k,l,m,n,a,b,c,node,city,x,y,road,store;
    while(cin>>city>>road>>store)
    {
        for(i=0; i<road; i++)
        {
            cin>>x>>y>>c;
            graph[x].push_back(y);
            graph[y].push_back(x);
            key w = make_pair(x,y);
            key z = make_pair(y,x);
            if(cost[w]==0)
            {
                cost[w]=c;
                cost[z]=c;
            }
            if(cost[z]==0)
            {
                cost[w]=c;
                cost[z]=c;
            }
            if (cost[w]>c)
            {
                cost[w]=c;
                cost[z]=c;
            }
            if (cost[z]>c)
            {
                cost[w]=c;
                cost[z]=c;
            }
        }
        for(i=0; i<store; i++)
        {
            cin>>x;
            storage.push_back(x);
            check[x]=1;
        }
        long long int mini_cost = 999999999999;
        for(l=0; l<storage.size(); l++)
        {
            a = storage[l];
            for(i=0; i<graph[a].size(); i++)
            {
                if(!check[graph[a][i]])
                {
                    key z = make_pair(a,graph[a][i]);
                    b = cost[z];
                    //cout<<"x "<<b<<endl;
                    if(b<mini_cost)
                        mini_cost = b;
                }

            }
        }
        if(mini_cost==MAX)
            cout<<-1<<endl;
        else cout<<mini_cost<<endl;
        cost.clear();
        storage.clear();
        check.clear();
        for(i=0; i<100000; i++)
            graph[i].clear();
    }




    return 0;
}
