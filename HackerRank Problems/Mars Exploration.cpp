#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,len,ans;
    char str[150];
    while(scanf("%s",str)==1)
    {
        ans = 0;
        len = strlen(str);
        for(i=0;i<len;i++)
        {
            m = i+1;
            if((m%3 == 1 || m%3 == 0) && str[i]!='S')
                ans++;
            else if(m%3==2 && str[i]!='O')
                ans++;
        }
        printf("%d\n",ans);

    }




    return 0;
}
