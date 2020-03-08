#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,t,x,y,z;
    double ans[1000];
    vector <int> num[100],unq;
    //vector <int> :: iterator it;
    map <int,int> freq,data;
    map <int,int> :: iterator it;
    set <int> st;
    set <int> :: iterator set_it;
    while(cin>>t)
    {
        for(x=1; x<=t; x++)
        {
            cin>>n;
            j=0;
            bool f= false;
            for(y=0; y<n; y++)
            {
                cin>>m;
                for(i=0;i<m;i++)
                {
                    cin>>a;
                    st.insert(a);
                }
                for(set_it=st.begin();set_it!=st.end();set_it++)
                {
                    b = *set_it;
                    num[y].push_back(b);
                    if(freq[b]==0)
                        freq[b]=1;
                    else freq[b]=freq[b]+1;

                }
            }
            for(it=freq.begin(); it!=freq.end(); it++)
            {
                if(it->second==1)
                    unq.push_back(it->first);
                //cout<<it->first<<" "<<it->second<<endl;
            }
            for(i=0; i<unq.size(); i++)
                cout<<unq[i]<<endl;
            bool found = false;
            for(k=0; k<unq.size(); k++)
            {
                found = false;
                for(i=0; i<n; i++)
                {
                    for(j=0; j<num[i].size(); j++)
                    {
                        if(num[i][j]==unq[k])
                        {
                            data[i]++;
                            found = true;
                            break;
                        }
                        //cout<<num[i][j]<<" ";
                    }
                    if(found)
                        break;
                    //cout<<endl;
                }
            }
            int sz = unq.size();
            for(i=0; i<n; i++)
            {
                double fuck;
                fuck = (double)data[i]/(double)sz * (double)100;
                ans[i]=fuck;
                //printf("%d %lf\n",i,fuck);
                //cout<<i<<" "<<fuck<<endl;
            }
            printf("Case %d:",x);
            for(i=0; i<n; i++)
            {
                printf(" %lf%%",ans[i]);
            }
            cout<<endl;
            unq.clear();
            for(i=0;i<60;i++)
                num[i].clear();
        }
    }

    return 0;
}
