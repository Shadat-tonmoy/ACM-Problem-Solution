#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,x,y,z,p,tc;
    vector <int> ot;
    double rt[100000],r;
    bool taken[100000];
    map <int,double> mp;
    map <int,double> :: iterator it;
    while(scanf("%d",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            cin>>n;
            memset(taken,false,sizeof taken);
            for(i=0; i<n; i++)
            {
                cin>>x>>y;
                r = (double)y/x;
                rt[i]=r;
                mp[i]=r;
                //cout<<r<<endl;
            }
            sort(rt,rt+n);
            for(i=n-1; i>=0; i--)
            {
                for(it=mp.begin(); it!=mp.end(); it++)
                {
                    if(it->second==rt[i] && !taken[it->first])
                    {
                        ot.push_back(it->first);
                        //cout<<it->first<<"  ";
                        taken[it->first]=true;
                        break;
                    }
                }
            }
            for(i=0; i<ot.size(); i++)
            {
                if(i==ot.size()-1)
                    cout<<ot[i]+1<<endl;
                else cout<<ot[i]+1<<" ";
            }
            ot.clear();
            if(l!=tc)
                cout<<endl;
        }




    }
    return 0;
}

