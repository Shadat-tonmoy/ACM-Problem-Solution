#include<bits/stdc++.h>
using namespace std;
string str,tmp,str2append,tmp2;
int main()
{
    int i,j,k,l,m,n,a,b,c,sz,len,op,tail,opTop;

    while(cin>>n)
    {
        stack<int> opStack;
        stack<string> stStack;

        tail = 0;
        str = "";
        for(l=1;l<=n;l++)
        {
            cin>>op;
            if(op==1)
            {
                cin>>str2append;
                int len = str2append.size();
                str+=str2append;
                opStack.push(op);
                stStack.push(str2append);
            }
            else if(op==2)
            {
                cin>>k;
                int len = str.size();
                tmp = str.substr(len-k,len);
                str.erase(str.size()-k);
                opStack.push(op);
                stStack.push(tmp);
            }
            else if(op==3)
            {
                cin>>k;
                cout<<str[k-1]<<endl;
            }
            else if(op==4)
            {
                opTop = opStack.top();
                opStack.pop();
                if(opTop==1)
                {
                    string tmp = stStack.top();
                    stStack.pop();
                    int len = tmp.size();
                    int len2 = str.size();
                    str.erase(str.size()-len);
                }
                else if(opTop==2)
                {
                    string tmp = stStack.top();
                    stStack.pop();
                    int len = tmp.size();
                    str+=tmp;
                }
            }
        }
    }

    return 0;
}
