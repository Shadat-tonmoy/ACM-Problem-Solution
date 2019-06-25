#include<bits/stdc++.h>
using namespace std;
bool isOpening(char ch);
bool isClosing(char ch);
bool isCorresponding(char a,char b);
int main()
 {
    int i,j,k,l,m,n,num[10000],x,y,z,tc;
    char str[1000];
    //freopen("input.txt","r",stdin);
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            stack<char> st;
            cin>>str;
            int len = strlen(str);
            bool isBalanced = true;
            for(i=0;i<len;i++)
            {
                if(isOpening(str[i]))
                {
                    st.push(str[i]);
                }
                else if(isClosing(str[i]))
                {
                    if(!st.empty())
                    {
                        char top = st.top();
                        st.pop();
                        if(!isCorresponding(top,str[i]))
                        {
                            isBalanced = false;
                            break;
                        }
                    }
                    else
                    {
                            isBalanced = false;
                            break;
                    }
                }
            }
            if(!st.empty())
                isBalanced = false;
            if(isBalanced)
                cout<<"balanced"<<endl;
            else cout<<"not balanced"<<endl;

        }
    }
	return 0;
}
bool isOpening(char ch)
{
    if(ch=='(' || ch=='{' || ch=='[')
        return true;
    else return false;
}

bool isClosing(char ch)
{
    if(ch==')' || ch=='}' || ch==']')
        return true;
    else return false;
}
bool isCorresponding(char a,char b)
{
    if(a=='(' && b==')')
        return true;
    else if(a=='{' && b=='}')
        return true;
    else if(a=='[' && b==']')
        return true;
    else return false;
}
