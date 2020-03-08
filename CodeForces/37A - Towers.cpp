#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    set<int> uni;
    map<int,int> freq;
    while(cin>>n)
    {
        int max_freq = 0;
        for(i=0;i<n;i++)
        {
            cin>>m;
            freq[m]++;
            max_freq = max(freq[m],max_freq);
            uni.insert(m);
        }
        printf("%d %d\n",max_freq,uni.size());
        uni.clear();
        freq.clear();
    }



    return 0;

}


