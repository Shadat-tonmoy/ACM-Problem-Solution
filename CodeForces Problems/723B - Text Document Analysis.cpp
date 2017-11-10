#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    string str;
    vector <char> in_braket,out_braket;
    while(cin>>n)
    {
        bool braket = false;
        cin>>str;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='(')
                braket=true;
            else if(str[i]==')')
            {
                braket=false;
                in_braket.push_back(str[i]);
            }
            if(braket)
                in_braket.push_back(str[i]);
            else
                out_braket.push_back(str[i]);
        }
        /*for(i=0;i<in_braket.size();i++)
            cout<<in_braket[i];
        cout<<endl;*/
        bool found = false;
        int cnt = 0;
        char ch;
        for(i=0;i<in_braket.size();i++)
        {
            if((in_braket[i]>='A' && in_braket[i]<='Z')|| (in_braket[i]>='a' && in_braket[i]<='z'))
            {
                ch=in_braket[i];
                //cout<<"found "<<ch<<endl;
                found=true;
            }
            if(found && (in_braket[i]=='_' || in_braket[i]==')'))
            {

                cnt++;
                found=false;
                //cout<<"coount : "<<ch<<endl;
            }
        }
        //cout<<cnt<<endl;
        in_braket.clear();
        int len=0,max_len=0;
        /*for(i=0;i<out_braket.size();i++)
            cout<<out_braket[i];
        cout<<endl;*/
        for(i=0;i<out_braket.size();i++)
        {
            if((out_braket[i]>='A' && out_braket[i]<='Z')|| (out_braket[i]>='a' && out_braket[i]<='z'))
            {
                len++;

            }
            if(out_braket[i]=='_' || i==out_braket.size()-1 || out_braket[i]==')')
            {
                max_len = max(len,max_len);
                len=0;
            }

        }
        //cout<<max_len<<endl;
        out_braket.clear();
        cout<<max_len<<" "<<cnt<<endl;
    }
    return 0;
}
