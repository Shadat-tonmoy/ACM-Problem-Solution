#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    bool flag;
    string str;
    stack <char> st;
    while(cin>>n)
    {
        getchar();

        for(m=1; m<=n; m++)
        {
            getline(cin,str);
            if(str=="\n")
            {
                printf("Yes\n");
                continue;
            }

            else if(str.size()==1 || str.size()%2!=0)
            {
                printf("No\n");
                continue;
            }
            flag = false;
            for(i=0; i<str.size(); i++)
            {
                if(str[i]=='(' || str[i]=='[')
                    st.push(str[i]);
                else if(str[i]==')' && !st.empty() && st.top()=='(')
                    st.pop();
                else if(str[i]==']' && !st.empty() && st.top()=='[')
                    st.pop();
                else flag = true;
            }
            if(st.empty() && !flag)
                printf("Yes\n");
            else printf("No\n");
            flag = false;
        }
    }
    return 0;
}
