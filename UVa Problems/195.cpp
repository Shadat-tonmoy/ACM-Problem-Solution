#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,s,a,b;
    vector <int> num;
    while(cin>>n)
    {
        num.push_back(n);
        s = num.size();
        sort(num.begin(),num.end());
        if(s%2==0)
        {
            a = s/2;
            int ans = (num[a-1]+num[a])/2;
            cout<<ans<<endl;
        }
        else cout<<num[s/2]<<endl;
    }
}
