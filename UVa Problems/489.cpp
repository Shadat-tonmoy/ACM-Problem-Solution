#include<bits/stdc++.h>
using namespace std;
char str[100000],guess[100000];
int main ()
{
    int i,j,l,m,n,len,win=0,lose=0,round,coun;
    char uniq[1000],uniq_ans[1000];
    while(cin>>round)
    {
        if(round==-1)
            break;
        else
        {
            win=0;
            lose=0;
            cin>>str;
            len=strlen(str);
            int a=0;
            for(i=0;i<len;i++)
            {
                if(str[i]!='0')
                    uniq[a++]=str[i];
                for(j=i+1;j<len;j++)
                {
                    if(str[j]==str[i])
                        str[j]='0';
                }
            }
            uniq[a]='\0';
            cin>>guess;
            len=strlen(guess);
            int b=0;
            for(i=0;i<len;i++)
            {
                if(guess[i]!='0')
                    uniq_ans[b++]=guess[i];
                for(j=i+1;j<len;j++)
                {
                    if(guess[j]==guess[i])
                        guess[j]='0';
                }
            }
            uniq_ans[b]='\0';
            for(i=0; i<b; i++)
            {
                coun=0;
                for(j=0; j<a; j++)
                {
                    if(uniq_ans[i]==uniq[j])
                    {
                        win++;
                        break;
                    }
                    else coun++;
                }
                if(coun==a)
                    lose++;
                if(win==a || lose==7)
                    break;
            }
            if(win==a)
                printf("Round %d\nYou win.\n",round);
            else if(lose==7)
                printf("Round %d\nYou lose.\n",round);
            else
                printf("Round %d\nYou chickened out.\n",round);
        }
    }
    return 0;
}
