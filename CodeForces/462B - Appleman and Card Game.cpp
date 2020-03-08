#include<bits/stdc++.h>
using namespace std;
map<char,long long int> freq;
map<char,long long int> :: iterator it;
vector<long long int> fr;
int main()
{
    long long int i,j,k,l,m,n,sum,target;
    char ch;
    while(cin>>n>>k)
    {
        sum=0;
        m=0;
        target=k;
        for(i=0;i<n;i++)
        {
            cin>>ch;
            freq[ch]++;
        }
        for(it=freq.begin();it!=freq.end();it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            fr.push_back(it->second);
        }
        sort(fr.begin(),fr.end());
        long long int ans=0;
        for(i=fr.size()-1;i>=0;i--)
        {
            //printf("Freq : %d ",fr[i]);
            if(fr[i]<target)
            {
                ans += fr[i]*fr[i];
                target-=fr[i];
            }
            else if(fr[i]>=target)
            {
                m = target*target;
                ans += m;
                target=0;
            }
            if(target==0)
                break;
            //printf("Target : %d, Ans : %d\n",target,ans);
        }
        cout<<ans<<endl;
        freq.clear();
        fr.clear();
    }



    return 0;
}
