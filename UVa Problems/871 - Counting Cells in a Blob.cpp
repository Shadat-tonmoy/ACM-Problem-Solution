#include<bits/stdc++.h>
using namespace std;
int x[8]= {1,0,-1,0,1,-1,-1,1};
int y[8]= {0,1,0,-1,1,-1,1,-1};
char grid[26][26];
int row,col;
int bfs (int srcx,int srcy)
{
    int i,j,k,ux,uy,vx,vy,c=0;
    queue<int> q;
    q.push(srcx);
    q.push(srcy);
    while(!q.empty())
    {
        ux = q.front();
        q.pop();
        uy = q.front();
        q.pop();
        for(i=0; i<8; i++)
        {
            vx = ux+x[i];
            vy = uy+y[i];
            if((vx>=0 && vx<=row) && (vy>=0 && vy<=col) && grid[vx][vy]=='1')
            {
                grid[vx][vy]='*';
                c++;
                q.push(vx);
                q.push(vy);

            }
        }
    }
    return c;
}

int main()
{
    int i,j,k,l,m,n,tc,c,maxi,ans;
    string str;
    bool blank = false;
    while(scanf("%d",&tc)==1)
    {
        getchar();
        getchar();
        while(tc--)
        {
            //getchar();
            //getchar();
            row=0;
            int p=0;
            while(1)
            {
                getline(cin,str);
                if(str=="")
                    break;
                col=str.size();
                //cout<<"STR : "<<str<<endl;
                for(i=0; i<str.size(); i++)
                {
                    grid[row][i]=str[i];
                    //cout<<grid[row][i]<<" ";
                    if(grid[row][i]=='1')
                    {
                        p++;
                        //cout<<grid[row][i]<<endl;

                    }
                }
                //cout<<endl;
                row++;
            }
            /*cout<<"OUTPUT"<<endl;
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    cout<<grid[i][j];
                }
                cout<<endl;
            }*/
            maxi=0;

            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    if(grid[i][j]=='1')
                    {
                        //p++;
                        ans=bfs(i,j);
                        //cout<<ans<<endl;
                        if(ans>maxi)
                            maxi=ans;
                    }
                }
            }
            if(blank)
                cout<<endl;
            blank = true;
            //cout<<"P: "<<p<<endl;
            //cout<<"Ans :  ";
            if(p==1)
                cout<<1<<endl;
            else if (p==0)
                cout<<0<<endl;
            else cout<<maxi<<endl;

            //getchar();
            //for(i=0; i<26; i++)
                //memset(grid[i],'\0',sizeof grid[i]);

        }

    }
    return 0;
}
