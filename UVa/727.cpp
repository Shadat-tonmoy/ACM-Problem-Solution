#include<bits/stdc++.h>
using namespace std;
/*#define inf infix[i]=="/" || infix[i]=="*" || infix[i]=="+" || infix[i]=="-"
#define divormlt infix[i]=="/" || infix[i]=="*"
#define plsormns infix[i]=="+" || infix[i]=="-"*/
int main()
{
    int i,j,k,l,m,n,a,b,c,tc;
    char ch;
    string str,tmp;
    vector <string> infix,postfix;
    stack <string> st;
    while(scanf("%d",&tc)==1)
    {
        bool blank = false;
        getchar();
        getchar();
        for(m=1; m<=tc; m++)
        {
            while(getline(cin,str))
            {
                if(str=="")
                    break;
                else infix.push_back(str);
            }
            infix.push_back(")");
            st.push("(");
            for(i=0; i<infix.size(); i++)
            {
                if(infix[i]>="0" && infix[i]<="9")
                {
                    postfix.push_back(infix[i]);
                }
                else if(infix[i]=="/" || infix[i]=="*" || infix[i]=="+" || infix[i]=="-")
                {
                    //cout<<"Found "<<infix[i]<<endl;
                    if(infix[ i]=="/" || infix[i]=="*")
                    {
                        while(st.top()=="/" || st.top()=="*")
                        {
                            tmp = st.top();
                            postfix.push_back(tmp);
                            st.pop();
                        }
                        st.push(infix[i]);
                    }
                    else if (infix[i]=="+" || infix[i]=="-")
                    {
                        //cout<<"Found "<<infix[i]<<endl;

                        while(st.top()=="+" || st.top()=="-" || st.top()=="*" || st.top()=="/")
                        {
                            //cout<<"top "<<st.top()<<endl;
                            tmp = st.top();
                            //cout<<tmp<<endl;
                            postfix.push_back(tmp);
                            st.pop();
                        }
                        st.push(infix[i]);
                    }

                }
                else if(infix[i]==")")
                {
                    //cout<<"Found "<<infix[i]<<endl;
                    while(st.top()!="(")
                    {
                        //cout<<"top "<<st.top()<<endl;
                        tmp = st.top();
                        //cout<<tmp<<endl;
                        postfix.push_back(tmp);
                        st.pop();
                    }
                    st.pop();
                }
                else if(infix[i]=="(")
                    st.push(infix[i]);
                //cout<<infix[i]<<" ";
            }
            if ( blank ) printf ("\n");
            blank = true;
            for(i=0; i<postfix.size(); i++)
                cout<<postfix[i];
            cout<<endl;
            infix.clear();
            postfix.clear();
        }
    }
    return 0;
}
