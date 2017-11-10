#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,ans,m,n,a,b,total;
    set <int> s;
    set <int> :: iterator it;
    while(cin>>m>>n)
    {
        if(m==0 && n==0)
            break;
        total = m+n;
        for(i=1;i<=total;i++)
        {
            cin>>a;
            s.insert(a);
        }
        b = s.size();
        ans = total - b;
        //printf("ANS : ");
        cout<<ans<<endl;
        s.clear();
    }
    return 0;
}
