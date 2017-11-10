#include<bits/stdc++.h>
using namespace std;
bool grid[501][501]= {false};
int main()
{
    int i,j,k,l,n,c,h,w,t,x1,x2,y1,y2,ans;
    while(scanf("%d %d %d",&h,&w,&t)==3)//cin>>h>>w>>t)
    {
        if(h==0 && w==0 && t==0)
            break;
        memset(grid,false,sizeof grid);
        c=0;
        for(l=1; l<=t; l++)
        {
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            //cin>>x1>>y1>>x2>>y2;
            if(x1>x2)
            {
                x1 = x1^x2;
                x2 = x2^x1;
                x1 = x1^x2;

                y1 = y1^y2;
                y2 = y2^y1;
                y1 = y1^y2;
                //swap(x1,x2);
                //swap(y1,y2);
            }
            if(y1>y2)
            {
                y1 = y1^y2;
                y2 = y2^y1;
                y1 = y1^y2;
            }

            for(i=x1; i<=x2; i++)
            {
                for(j=y1; j<=y2; j++)
                {
                    if(!grid[i][j])
                    {
                        grid[i][j]=true;
                        c++;
                    }
                }
            }
        }
        ans = (h*w) - c;
        if(ans==0)
            printf("There is no empty spots.\n");
        else if(ans==1)
            printf("There is one empty spot.\n");
        else printf("There are %d empty spots.\n",ans);
        //cout<<"Ans : "<<ans<<endl;
    }
    return 0;
}
