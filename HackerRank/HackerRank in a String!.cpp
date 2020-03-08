#include<bits/stdc++.h>
using namespace std;
bool found[20];
bool checkRange(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        if(!found[i])
            return false;
    }
    return true;

}
int main()
{
    int i,j,k,l,m,n,len,ans,q;
    char str[50000];
    bool allFound,ok;
    while(scanf("%d",&q)==1)
    {
        for(l=1;l<=q;l++)
        {
            memset(found,false,sizeof(found));
            int index[20];
            allFound = false;
            ok = true;
            cin>>str;
            len = strlen(str);
            for(i=0;i<len;i++)
            {
                if(str[i]=='h' && !found[1])
                {
                    found[1]=true;
                    index[1]=i;
                }
                else if(str[i]=='a' && !found[2] && found[1])
                {
                    found[2]=true;
                    index[2]=i;
                }
                else if(str[i]=='c' && !found[3] && checkRange(1,2))
                {
                    found[3]=true;
                    index[3]=i;
                }
                else if(str[i]=='k' && !found[4] && checkRange(1,3))
                {
                    found[4]=true;
                    index[4]=i;
                }
                else if(str[i]=='e' && !found[5] && checkRange(1,4))
                {
                    found[5]=true;
                    index[5]=i;
                }
                else if(str[i]=='r' && !found[6] && checkRange(1,5))
                {
                    found[6]=true;
                    index[6]=i;
                }
                else if(str[i]=='r' && !found[7] && checkRange(1,6))
                {
                    found[7]=true;
                    index[7]=i;
                }
                else if(str[i]=='a' && !found[8] && checkRange(1,7))
                {
                    found[8]=true;
                    index[8]=i;
                }
                else if(str[i]=='n' && !found[9] && checkRange(1,8))
                {
                    found[9]=true;
                    index[9]=i;
                }
                else if(str[i]=='k' && !found[10] && checkRange(1,9))
                {
                    found[10]=true;
                    index[10]=i;
                }
                if(checkRange(1,10))
                {
                    allFound = true;
                    break;
                }
            }
            if(allFound)
            {
                for(i=1;i<10;i++)
                {
                    if(index[i]>=index[i+1])
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok)
                    printf("YES\n");
                else printf("NO\n");
            }
            else printf("NO\n");
        }
    }
    return 0;
}
