#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,mat[100][100],temp[1000],mat_trn[100][100],tc,dim,cm;
    string command,num[100];
    while(cin>>tc)
    {
        for(k=1; k<=tc; k++)
        {
            cin>>n;
            getchar();
            for(i=1;i<=n;i++)
                cin>>num[i];
            for(i=1; i<=n; i++)
            {
                for(j=0; j<=n; j++)
                {
                    //cout<<num[i][j];
                   mat[i][j+1]=num[i][j]-'0';
                }
                //cout<<endl;

            }
            cin>>c;
            for(cm=1; cm<=c; cm++)
            {
                cin>>command;
                if(command=="transpose")
                {
                    for(i=1; i<=n; i++)
                        for(j=1; j<=n; j++)
                            mat_trn[i][j]=mat[j][i];
                    for(i=1; i<=n; i++)
                        for(j=1; j<=n; j++)
                            mat[i][j]=mat_trn[i][j];
                }
                else if(command=="inc")
                {
                    for(i=1; i<=n; i++)
                    {
                        for(j=1; j<=n; j++)
                        {
                            mat[i][j]++;
                            if(mat[i][j]==10)
                                mat[i][j]=0;
                        }
                    }
                }
                else if(command=="dec")
                {
                    for(i=1; i<=n; i++)
                    {
                        for(j=1; j<=n; j++)
                        {
                            mat[i][j]--;
                            if(mat[i][j]==-1)
                                mat[i][j]=9;
                        }
                    }
                }
                else if(command=="row")
                {
                    cin>>a>>b;
                    for(i=1; i<=n; i++)
                        temp[i]=mat[a][i];
                    for(i=1; i<=n; i++)
                        mat[a][i]=mat[b][i];
                    for(i=1; i<=n; i++)
                        mat[b][i]=temp[i];
                }
                else if(command=="col")
                {
                    cin>>a>>b;
                    for(i=1; i<=n; i++)
                        temp[i]=mat[i][a];
                    for(i=1; i<=n; i++)
                        mat[i][a]=mat[i][b];
                    for(i=1; i<=n; i++)
                        mat[i][b]=temp[i];
                }
                //printf("Command %d is done \n",cm);
            }
            printf("Case #%d\n",k);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    cout<<mat[i][j];
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
