#include<bits/stdc++.h>
using namespace std;
int x[]= {2,-2,2,-2,1,-1,1,-1};
int y[]= {1,1,-1,-1,2,2,-2,-2};
int main()
{
    int i,j,k,l,m,n,a,b,ux,uy,vx,vy;
    string grid [10][10],src,dst,tmpstr;
    char ch,nm,tmp[10];
    queue <string> q;
    map <string,int> visited;
    map <string,int> :: iterator it;
    map <string,int> level;
    for(i=0,ch='a'; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            nm=j+49;
            tmp[0] = ch;
            tmp[1] = nm;
            tmp[2] = '\0';
            grid[i][j]=tmp;
        }
        ch++;
    }
    while(cin>>src>>dst)
    {
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
                visited[grid[i][j]]=0;
        }
        bool found = false;
        int c=0;
        visited[src]=1;
        q.push(src);
        string frnt = q.front();
        level[frnt]=0;
        while(!q.empty())
        {
            frnt = q.front();
            q.pop();
            for(i=0; i<8; i++)
            {
                for(j=0; j<8; j++)
                {
                    if(grid[i][j]==frnt)
                    {
                        ux=i;
                        uy=j;
                        break;
                    }
                }
            }
            //cout<<ux<<" "<<uy<<endl;
            for(i=0; i<8; i++)
            {
                if((((ux+x[i]>=0) && (ux+x[i]<=7)) && ((uy+y[i]>=0 && (uy+y[i]<=7)))))
                    tmpstr = grid[ux+x[i]][uy+y[i]];
                //cout<<tmpstr<<endl;

                if((!visited[tmpstr]) && ((ux+x[i]>=0) && (ux+x[i]<=7)) && ((uy+y[i]>=0 && (uy+y[i]<=7))))
                {
                    //cout<<tmpstr<<endl;
                    visited[tmpstr]=1;
                    level[tmpstr]=level[frnt]+1;
                    q.push(tmpstr);
                }
                if(tmpstr==dst)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
        cout<<"To get from "<<src<<" to "<<dst<<" takes "<<level[dst]<<" knight moves."<<endl;
        //cout<<level[dst]<<endl;
        level.clear();
        while(!q.empty())
            q.pop();


    }





    return 0;
}
