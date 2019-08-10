#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,k,l,m,n,a,b,c,ac=1;
    bool found = false;
    string sub[1000],s[1000],str,st;
    while(cin>>str)
    {
        if(str[0]=='9')
        {
            found = false;
            l=0;
            for(j=0; j<i; j++)
            {

                //cout<<s[j]<<endl;
                for(k=1; k<=s[j].size(); k++)
                {
                    st=s[j].substr(0,k);
                    if(st.size()!=s[j].size())
                    {
                        sub[l]=st;
                        l++;
                    }
                    //cout<<st<<endl;
                }

            }
            for(a=0; a<i; a++)
            {
                for(b=0;b<l;b++)
                {
                    if(s[a]==sub[b])
                    {
                        found=true;
                        break;
                    }
                }
                if(found)
                    break;
            }
            if(found)
                printf("Set %d is not immediately decodable\n",ac++);
            else printf("Set %d is immediately decodable\n",ac++);
                //cout<<sub[a]<<endl;

            i=0;
        }
        else
        {
            s[i]=str;
            i++;
        }

    }







    return 0;
}
