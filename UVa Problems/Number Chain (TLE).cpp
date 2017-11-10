#include<bits/stdc++.h>
using namespace std;
vector<string> first,last,ans;
void process(string str)
{
    string num1,num2,num3;
    int tmp;
    int i,j,k,l,m,n,n1=0,n2=0,subs,a=0;
    char num[2000];
    sort(str.begin(),str.end());
    num1 = str;
    reverse(str.begin(),str.end());
    num2 = str;
    first.push_back(num1);
    last.push_back(num2);
    //cout<<num1<<endl<<num2<<endl;
    for(i=0; i<num1.size(); i++)
    {
        n1 = n1 * 10;
        n1 = n1 + num1[i]-'0';
    }
    for(i=0; i<num2.size(); i++)
    {
        n2 = n2 * 10;
        n2 = n2 + num2[i]-'0';

    }
    subs = n2 - n1;
    tmp = subs;
    if(tmp==0)
        num[a++]=tmp+'0';
    else
    {
        while(tmp!=0)
        {
            num[a++]=tmp%10 + '0';
            tmp = tmp/10;
        }
    }
    num[a]='\0';
    num3 = strrev(num);
    ans.push_back(num3);
    //cout<<n1<<endl<<n2<<endl<<subs<<endl<<num3;

}
int main()
{
    int i,j,k,l,m,n,a,b,c,n1=0,n2=0;
    string num,num1,num2;
    char str[2000];
    while(cin>>num)
    {
        ans.push_back(num);
        for(i=1;; i++)
        {
            process(ans[ans.size()-1]);
            if(ans[ans.size()-1]==ans[ans.size()-2])
                break;
            //cout<<ans.size()<<endl;
        }
        //cout<<ans[ans.size()-1]<<" "<<ans[ans.size()-2]<<endl;
        b=ans.size()-1;
        cout<<"Original number was "<<num<<endl;
        for(i=0; i<first.size(); i++)
            cout<<last[i]<<" - "<<first[i]<<" = "<<ans[i+1]<<endl;
        printf("Chain length %d\n",b);
        first.clear();
        last.clear();
        ans.clear();
    }




    return 0;
}

