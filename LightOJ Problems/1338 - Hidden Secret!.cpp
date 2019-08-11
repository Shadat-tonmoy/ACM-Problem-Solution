#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,tc;
    char str1[1000],str2[1000],ch,str1_cln[1000],str2_cln[1000];
    scanf("%d",&tc);
    getchar();
    for(l=1;l<=tc;l++)
    {
        gets(str1);
        //getchar();
        gets(str2);
        j=0;
        for(i=0;i<strlen(str1);i++)
        {
            if(str1[i]>='A' && str1[i]<='Z')
            {
               str1[i]+=32;
               str1_cln[j]=str1[i];
               j++;
            }
            else if(str1[i]>='a' && str1[i]<='z')
            {
                str1_cln[j]=str1[i];
                j++;
            }

        }
        str1_cln[j]='\0';
        j=0;
        for(i=0;i<strlen(str2);i++)
        {
            if(str2[i]>='A' && str2[i]<='Z')
            {
                str2[i]+=32;
                str2_cln[j]=str2[i];
                j++;
            }
            else if(str2[i]>='a' && str2[i]<='z')
            {
                str2_cln[j]=str2[i];
                j++;
            }

        }
        str2_cln[j]='\0';
        sort(str1_cln,str1_cln+strlen(str1_cln));
        sort(str2_cln,str2_cln+strlen(str2_cln));
        //cout<<str1_cln<<endl<<str2_cln;
        if(!strcmp(str1_cln,str2_cln))
            printf("Case %d: Yes\n",l);
        else printf("Case %d: No\n",l);
    }


    return 0;
}
