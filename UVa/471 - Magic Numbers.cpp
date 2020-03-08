#include<bits/stdc++.h>
#define inf 9876543210LL
using namespace std;
bool noRepeated(unsigned long long int n)
{
    bool visited[11];
    memset(visited,false,sizeof visited);
    int tmp;
    while(n!=0)
    {
        tmp = n%10;
        if(visited[tmp])
            return false;
        visited[tmp]=true;
        n=n/10;
    }
    return true;
}
int main()
{
    int i,j,k,l,m,tc;
    unsigned long long int n,s1,s2;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            cin>>n;
            for(i=1;;i++)
            {
                s2 = i*n;
                if(s2>inf)
                    break;
                else if(noRepeated(i))
                {
                    if(noRepeated(s2))
                    {
                        cout<<s2<<" / "<<i<<" = "<<n<<endl;
                    }
                }
            }
            if(l!=tc)
                cout<<endl;
        }

    }


    return 0;
}
