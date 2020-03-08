#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,row,col,freq[1000],ans,x,y;
    char grid[100][100];
    vector <char> ch;
    while(cin>>tc)
    {
        for(m=1;m<=tc;m++)
        {
            a=0;
            int maxi = 0;
            int maxi_c = 0;
            int maxi_r;
            int r_r;
            cin>>row>>col>>x>>y;
            for(i=0;i<row;i++)
                for(j=0;j<col;j++)
                {
                    cin>>grid[i][j];
                    ch.push_back(grid[i][j]);
                }
            sort(ch.begin(),ch.end());
            for(i=0;i<ch.size();i++)
            {
                //cout<<ch[i]<<" ";
                c = count(ch.begin(),ch.end(),ch[i]);
                //cout<<c<<endl;
                freq[a++]=c;
                i = i + c - 1;
                if(c>maxi)
                    maxi=c;
                //cout<<"i is "<<i<<endl;
            }
            for(i=0;i<a;i++)
            {
                if(freq[i]==maxi)
                    maxi_c++;
            }
            maxi_r = maxi * maxi_c;
            r_r = ch.size()-maxi_r;
            //printf("Max is %d with freq %d Max_region is %d r_re is %d\n",maxi,maxi_c,maxi_r,r_r);
            ans = (maxi_r*x)+(r_r*y);
            printf("Case %d: %d\n",m,ans);
            ch.clear();



        }
    }
    return 0;
}
