#include<bits/stdc++.h>
using namespace std;
bool found[30];
bool isPangram()
{
    for(int i=1;i<=26;i++)
    {
        if(!found[i])
            return false;
    }
    return true;

}
int main()
{
    int i,j,k,l,m,n,len,ans,index;
    char str[50000];
    while(fgets(str,sizeof(str),stdin))
    {
        memset(found,false,sizeof(found));
        len = strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                index = str[i];
                found[index-96] = true;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                index = str[i]+32;
                found[index-96] = true;
            }
        }
        if(isPangram())
            printf("pangram\n");
        else printf("not pangram\n");
    }
    return 0;
}
