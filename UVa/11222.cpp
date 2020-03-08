#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,t;
    vector <int> solved[15],unq_solved[15];
    while(cin>>t)
    {
        for(m=1;m<=t;m++)
        {
            int maxi=0;
            bool found = false;
            for(k=1;k<=3;k++)
            {
                scanf("%d",&n);
                //cin>>n;
                for(i=1;i<=n;i++)
                {
                    //cin>>a;
                    scanf("%d",&a);
                    solved[k].push_back(a);
                }
            }
            for(i=1;i<=3;i++)
            {
                for(j=0;j<solved[i].size();j++)
                {
                    found = false;
                    for(k=1;k<=3;k++)
                    {
                        if(i!=k)
                        {
                            for(l=0;l<solved[k].size();l++)
                            {
                                if(solved[i][j]==solved[k][l])
                                {
                                    found=true;
                                    break;
                                }
                            }
                        }
                        if(found)
                            break;
                    }
                    if(!found)
                    {
                        unq_solved[i].push_back(solved[i][j]);
                    }
                }
            }
            for(i=1;i<=3;i++)
            {
                if(unq_solved[i].size()>=maxi)
                {
                    maxi=unq_solved[i].size();
                    //c = i;
                }
            }
            printf("Case #%d:\n",m);
            for(i=1;i<=3;i++)
            {
                if(unq_solved[i].size()==maxi)
                {
                    sort(unq_solved[i].begin(),unq_solved[i].end());
                    printf("%d %d",i,maxi);
                    //cout<<i<<" "<<maxi<<" ";
                    for(j=0;j<unq_solved[i].size();j++)
                    {
                        /*f(j==unq_solved[i].size()-1)
                            printf("%d\n",unq_solved[i][j]);*/
                        printf(" %d",unq_solved[i][j]);
                    }
                    puts("");
                }
            }
            /*out<<maxi<<" solved by "<<c<<" no"<<endl;
            for(i=1;i<=3;i++)
            {
                for(j=0;j<unq_solved[i].size();j++)
                    cout<<unq_solved[i][j]<<" ";
                cout<<endl;
            }*/
            for(i=0;i<10;i++)
                solved[i].clear();
            for(i=0;i<10;i++)
                unq_solved[i].clear();
        }

    }

    return 0;
}
