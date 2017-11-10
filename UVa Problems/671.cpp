#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m=0,n,dif=0,c=0,a,check=0;
    string dic[100000],word,newline;
    bool first = true;
    cin>>n;
    check=1;
    getline(cin,newline);
    while(n--)
    {
        getline(cin,newline);
        if (!first)
            cout << endl;
        first = false;
        while(getline(cin,dic[++m]))
        {
            if(dic[m]=="#")
                break;
        }
        while(cin>>word)
        {
            int flag = 0;
            if(word[0]=='#')
                break;

            for(i=0; i<m; i++)
            {
                if(word==dic[i])
                {
                    flag=1;
                    cout<<word<<" is correct"<<endl;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<word<<":";
                int len = word.size();
                int dic_len;
                dif = 0;
                for(i=0; i<m; i++)
                {
                    dif=0;
                    string dic_word = dic[i];
                    dic_len = dic_word.size();
                    if(dic_len == len)
                    {
                        dif=0;
                        for(j=0; j<dic_len; j++)
                        {
                            if(word[j]!=dic_word[j])
                                dif++;
                            if(dif>1)
                                break;
                        }
                        if(dif==1)
                            cout<<" "<<dic_word;
                    }
                    else if(dic_len == len+1)
                    {
                        string tmp = dic_word;
                        int found=0;
                        for(j=0; j<len; j++)
                        {
                            for(k=0; k<tmp.size(); k++)
                            {
                                if(word[j]==tmp[k])
                                {
                                    found++;
                                    tmp.erase(tmp.begin()+k);
                                    break;
                                }
                            }

                        }
                        if(found==len)
                            cout<<" "<<dic_word;
                    }
                    else if(dic_len == len-1)
                    {
                        string tmp = word;
                        int found = 0;
                        for(j=0; j<dic_len; j++)
                        {
                            for(k=0; k<tmp.size(); k++)
                            {
                                if(dic_word[j]==tmp[k])
                                {
                                    found++;
                                    tmp.erase(tmp.begin()+k);
                                    break;
                                }
                            }
                        }
                        if(found==dic_len)
                            cout<<" "<<dic_word;
                    }
                }
                cout<<endl;
            }
        }
        m=0;
    }

    return 0;
}
