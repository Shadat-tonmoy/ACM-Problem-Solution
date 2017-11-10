#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m=0,n,len,i_d,n_set = 1;
    string str[1000],match;
    while(cin>>str[m])
    {
        while(1)
        {
            if(str[m][0]=='9')
                break;
            cin>>str[++m];
        }
        for(i=0; i<m; i++)
        {
            match = str[i];
            int match_len = match.length();
            int flag=0;
            i_d=0;
            for(j=0; j<m; j++)
            {
                if(j==i)
                    continue;
                else
                {
                    if(str[j][0]==match[0])
                    {
                        for(k=0; k<match_len; k++)
                        {
                            if(str[j][k]==match[k])
                                flag=1;
                            else
                            {
                                flag=0;
                                break;
                            }
                        }
                        if(flag==1)
                        {
                            i_d=1;
                            break;
                        }
                    }

                }

            }
            if(i_d==1)
                break;
        }
        if(i_d==1)
            printf("Set %d is not immediately decodable\n",n_set);
        else printf("Set %d is immediately decodable\n",n_set);
        n_set++;
        m=0;
    }
    return 0;
}
