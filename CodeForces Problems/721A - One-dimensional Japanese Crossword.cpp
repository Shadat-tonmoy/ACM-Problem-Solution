#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count_cons,count_num,ans[50],c,n;
    string str;

    while(cin>>n)
    {
        count_cons=0,count_num=0,c=0;
        cin>>str;
        for(i=0; i<str.length();)
        {
            if(str[i]=='B')
            {
                count_cons++;
                for(j=i; str[j]=='B'; j++)
                {
                    count_num++;
                }
                ans[c]=count_num;
                c++;
                count_num=0;
                i=j;
            }
            else i++;
        }
        cout<<count_cons<<endl;
        if(count_cons>0)
        {

            for(i=0; i<c; i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }

    }



    return 0;

}


