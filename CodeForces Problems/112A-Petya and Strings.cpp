#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k;
    char str_a[10000],str_b[10000];
    while(gets(str_a))
    {
        gets(str_b);
        /*for(i=0;i<len;i++)
        {
            if(str_a[i]>='A' && str_a[i]<='Z')
            {
                str_a[i]+=32;
            }
        }
        for(i=0;i<len;i++)
        {
            if(str_b[i]>='A' && str_b[i]<='Z')
            {
                str_b[i]+=32;
            }
        }*/
        if(stricmp(str_a,str_b)==0)
            cout<<"0"<<endl;
        else if(stricmp(str_a,str_b)>0)
            cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
