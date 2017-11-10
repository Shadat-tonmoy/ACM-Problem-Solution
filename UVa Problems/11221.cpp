#include<bits/stdc++.h>
using namespace std;
char grid[10000][10000];
int main ()
{
    int i,j,k,l,m,c,n,a,b,r,flag;
    string str;
    while(cin>>n)
    {
        getchar();
        for(m=1; m<=n; m++)
        {
            getline(cin,str);
            flag = 0;
            int len = str.size();
            c=0;
            for(i=0; i<len; i++)
            {
                if(str[i]>='a' && str[i]<='z')
                    c++;
            }
            r = sqrt(c);
            printf("Case #%d:\n", m);
            if(r*r == c)
            {
                flag = 0;
                a=0;
                for(i=1; i<=r; i++)
                {
                    for(j=1; j<=r; j++)
                    {
                        if(str[a]>='a' && str[a]<='z')
                        {
                            grid[i][j]=str[a++];
                        }
                        else
                        {
                            a++;
                            j--;
                        }
                    }
                }
                for(i=1; i<=r; i++)
                {
                    for(j=1; j<=r; j++)
                    {
                        if(grid[i][j] == grid[j][i])
                            flag = 1;
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if(flag==0)
                        break;
                }
                if(flag == 1)
                    cout<<r<<endl;
                else printf("No magic :(\n");
            }
            else printf("No magic :(\n");
        }

    }
    return 0;
}
