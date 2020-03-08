#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[1000],cd[1000],d[1000],ub[100][100],lb[100][100],c[100],m,n,a,i,j,k,l,is[1000];
    string name[100],input;
    while(cin>>m>>n)
    {
        for(i=1;i<=m;i++)
        {
            cin>>name[i]>>b[i];
            cin>>cd[i]>>d[i];
            for(j=1;j<=d[i];j++)
            {
                cin>>lb[i][j]>>ub[i][j];
            }
        }
        for(i=1;i<=n;i++)
        {
            cin>>input;
            int dimen,fnd;
            for(a=1;a<=m;a++)
            {
                if(name[a]==input)
                {
                    dimen=d[a];
                    fnd = a;
                    break;
                }
            }
            for(a=1;a<=dimen;a++)
                cin>>is[a];
            c[dimen]=cd[fnd];
            for(j=dimen-1;j>0;j--)
            {
                c[j]=c[j+1]*(ub[fnd][j+1]-lb[fnd][j+1]+1);
            }
            int ans=0,final_ans=0;
            for(j=1;j<=dimen;j++)
            {
                ans = ans + c[j]*lb[fnd][j];
            }
            c[0]=b[fnd]-ans;
            final_ans = c[0];
            for(j=1;j<=dimen;j++)
            {
                final_ans = final_ans + is[j]*c[j];
            }
            cout<<input<<"[";
            for(j=1;j<=dimen;j++)
            {
                if(j<dimen)
                    cout<<is[j]<<", ";
                else if(j==dimen)
                    cout<<is[j]<<"]";
            }
            cout<<" = "<<final_ans<<endl;
        }

    }

    return 0;
}
