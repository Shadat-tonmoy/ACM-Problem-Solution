#include<bits/stdc++.h>
using namespace std;
char grid [100][100];
int x[4]= {0,0,1,-1};
int y[4]= {1,-1,0,0};
int row,col;
void bfs (int srcx,int srcy,char ch)
{
    int i,j,k,l,m,ux,uy,vx,vy;
    queue<int> q;
    q.push(srcx);
    q.push(srcy);
    while(!q.empty())
    {
        ux = q.front();
        q.pop();
        uy = q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            vx = ux + x[i];
            vy = uy + y[i];
            if((vx>=0 && vx<row) && (vy>=0 && vy<col) && (grid[vx][vy]==ch))
            {
                grid[vx][vy]='*';
                q.push(vx);
                q.push(vy);
            }
        }
    }
}

int main()
{
    int i,j,k,l,m,c=0,tc,x,y,z,freq[100000];
    char ch,charr[1000];
    set <char> chr;
    set <char> :: iterator it;
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>row>>col;
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    cin>>grid[i][j];
                    chr.insert(grid[i][j]);
                }
            }
            //cout<<chr.size()<<endl;
            for(it=chr.begin(),k=0;it!=chr.end();it++,k++)
            {
                c=0;
                ch=*it;
                for(i=0;i<row;i++)
                {
                    for(j=0;j<col;j++)
                    {
                        if(grid[i][j]==ch)
                        {
                            c++;
                            bfs(i,j,ch);
                        }
                    }
                }
                charr[k]=ch;
                freq[k]=c;
                //cout<<ch<<" "<<c<<endl;
            }
            for(i=0;i<k;i++)
            {
                for(j=0;j<k;j++)
                {
                    if(freq[i]>freq[j])
                    {
                        swap(freq[i],freq[j]);
                        swap(charr[i],charr[j]);
                    }
                }
            }
            printf("World #%d\n",x);
            for(i=0;i<k;i++)
                cout<<charr[i]<<": "<<freq[i]<<endl;
            chr.clear();

        }
    }

    return 0;
}
