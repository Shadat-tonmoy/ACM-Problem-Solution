#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,total,x,y;
    string binder,ingr,recip,req;
    map <string,int> data;
    map <string,int> required;
    vector <string> final;
    vector <int> cost;
    while(cin>>n)
    {
        //getchar();
        for(x=1; x<=n; x++)
        {
            getchar();
            getline(cin,binder);
            cin>>m>>n>>b;
            for(i=0; i<m; i++)
            {
                cin>>ingr>>a;
                data[ingr]=a;
            }
            for(i=0; i<n; i++)
            {
                getchar();
                getline(cin,recip);
                cin>>k;
                total = 0;
                for(j=0; j<k; j++)
                {
                    cin>>req>>a;
                    total += data[req]*a;
                }
                if(total<=b)
                {
                    final.push_back(recip);
                    cost.push_back(total);
                }
                //cout<<recip<<" \tis of cost "<<total<<endl;
            }
            for(i=0; i<cost.size(); i++)
            {
                for(j=i+1; j<cost.size(); j++)
                {
                    if(cost[i]>cost[j])
                    {
                        swap(cost[i],cost[j]);
                        swap(final[i],final[j]);
                    }
                    else if(cost[i]==cost[j] && final[i]>final[j])
                    {
                        swap(final[i],final[j]);
                        swap(cost[i],cost[j]);

                    }
                }
            }
            for(i=0; i<binder.size(); i++)
            {
                if(binder[i]>='a' && binder[i]<='z')
                    binder[i]-=32;
            }
            //printf("\toutput : \n");
            cout<<binder<<endl;
            if(!final.empty())
            {
                //sort(final.begin(),final.end());
                for(i=0; i<final.size(); i++)
                    cout<<final[i]<<endl;
                cout<<endl;
            }
            else cout<<"Too expensive!"<<endl<<endl;
            //printf("-----------\n");
            final.clear();
            cost.clear();

        }
    }




    return 0;
}
