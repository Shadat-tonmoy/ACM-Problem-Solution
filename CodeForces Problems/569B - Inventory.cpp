#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[100000],in;
    vector <int> tmp,index;
    map <int,int> freq;
    bool visited[100000];
    while(cin>>n)
    {
        memset(visited,false,sizeof visited);
        for(i=1; i<=n; i++)
        {
            cin>>num[i];
            freq[num[i]]++;
        }
        for(i=1; i<=n; i++)
        {
            if(freq[i]==0)
                tmp.push_back(i);
        }
        for(i=1; i<=n; i++)
        {
            if(!visited[num[i]] && (num[i]>=1 && num[i]<=n))
                visited[num[i]]=true;
            else
            {
                //cout<<num[i]<<" "<<i<<endl;
                index.push_back(i);
            }
        }
        if(n==1)
            num[1]=tmp[0];
        else
        {
            for(i=0; i<tmp.size(); i++)
            {
                num[index[i]]=tmp[i];
            }

        }

        for(i=1; i<=n; i++)
            cout<<num[i]<<" ";
        cout<<endl;
        tmp.clear();
        index.clear();
        freq.clear();
    }





    return 0;
}
