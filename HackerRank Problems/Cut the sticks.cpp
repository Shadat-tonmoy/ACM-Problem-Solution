#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,m,n,a,b;
    while(cin>>n)
    {
        map<int,int> freq;
        map<int,int> :: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>a;
            freq[a]++;
        }
        cout<<n<<endl;
        for(it=freq.begin();it!=freq.end();it++)
        {
            n-=it->second;
            if(n!=0)
                cout<<n<<endl;
        }

    }
    return 0;
}
