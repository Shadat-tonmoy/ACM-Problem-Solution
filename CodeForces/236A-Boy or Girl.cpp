#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m;
    char str[1000];
    set <char> st;
    while(gets(str))
    {
        int len=strlen(str);
        for(i=0;i<len;i++)
            st.insert(str[i]);
        if(st.size()%2==0)
            printf("CHAT WITH HER!\n");
        else printf("IGNORE HIM!\n");
        st.clear();
    }

    return 0;
}
