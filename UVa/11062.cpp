#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    char input[10000],cut[10000],sut[10000];
    string str,ar[10000];
    bool found = false;
    set <string> st;
    set <string> :: iterator it;
    while(scanf("%s",input)!=EOF)
    {
        found = false;
        int len = strlen(input);
        for(i=0; i<len; i++)
        {
            if(input[i]>=65 && input[i]<=90)
                input[i]+=32;
        }
        if(input[len-1]=='-')
        {
            found = true;
            j=0;
            while(found)
            {
                for(i=0; i<len-1; i++)
                    cut[j++]=input[i];
                //cout<<ar<<endl;
                scanf("%s",input);
                len = strlen(input);
                if(input[len-1]=='-')
                    found=true;
                else found = false;
            }
            if(!found)
                for(i=0; i<len; i++)
                    cut[j++]=input[i];
            cut[j]='\0';
            l=0;
            for(i=0; i<j; i++)
            {
                if((cut[i]>='a' && cut[i]<='z'))
                    sut[l++]=cut[i];
            }
            sut[l]='\0';
            str = sut;
            st.insert(str);
            //cout<<sut<<endl;
            //getchar();
        }
        else
        {
            l=0;
            len = strlen(input);
            for(i=0; i<len;)
            {
                if((input[i]>='a' && input[i]<='z') || input[i]=='-')
                    i++;
                else input[i++]='0';
            }
            //cout<<input<<endl;
            k=0;
            //cout<<len<<endl;
            for(i=0; i<len;)
            {
                if(input[i]!='0')
                {
                    //cout<<input[i]<<endl;
                    //cout<<i<<endl;
                    sut[k++]=input[i++];
                    if(i==len)
                    {
                        sut[k]='\0';
                        str=sut;
                        //cout<<str<<endl;
                        st.insert(str);
                    }

                }

                else
                {
                    sut[k]='\0';
                    str=sut;
                    //cout<<str<<endl;
                    st.insert(str);
                    k=0;
                    while(input[i]=='0')
                        i++;
                    //cout<<i<<endl;
                }
                //cout<<input[i]<<endl;
            }

            //getchar();
            //cout<<input<<endl;
        }

    }
    for(it=st.begin(); it!=st.end(); it++)
        cout<<*it<<endl;

    return 0;
}
