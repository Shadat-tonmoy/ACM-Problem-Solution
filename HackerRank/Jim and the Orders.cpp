#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
bool comp(int x,int y)
{
    return x>y;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,t,d,num[10000],sum;
    while(cin>>n)
    {
        map<int,vector<int> > cost;
        set<int> uni;
        set<int> :: iterator it;
        for(i=1;i<=n;i++)
        {
            cin>>t>>d;
            uni.insert(t+d);
            cost[t+d].push_back(i);
        }
        for(it=uni.begin();it!=uni.end();it++)
        {
            for(j=0;j<cost[*it].size();j++)
                cout<<cost[*it][j]<<" ";
        }
        cout<<endl;




    }


}












