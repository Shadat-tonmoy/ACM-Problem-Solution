#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,tc;
    double m,n,ans;
    stack <string> fw,bw;
    string cp,cmd,url;
    while(scanf("%d",&tc)==1)
    {

        for(l=1; l<=tc; l++)
        {
            printf("Case %d:\n",l);
            cp="http://www.lightoj.com/";
            while(cin>>cmd)
            {
                if(cmd=="QUIT")
                    break;
                if(cmd=="VISIT")
                {
                    cin>>url;
                    bw.push(cp);
                    cp=url;
                    while(!fw.empty())
                        fw.pop();
                    cout<<cp<<endl;
                }
                else if (cmd=="BACK")
                {
                    if(bw.empty())
                    {
                        cout<<"Ignored"<<endl;
                    }
                    else
                    {
                        fw.push(cp);
                        cp = bw.top();
                        bw.pop();
                        cout<<cp<<endl;
                    }
                }
                else if (cmd=="FORWARD")
                {
                    if(fw.empty())
                    {
                        cout<<"Ignored"<<endl;
                    }
                    else
                    {
                        bw.push(cp);
                        cp = fw.top();
                        fw.pop();
                        cout<<cp<<endl;
                    }
                }
            }
            while(!fw.empty())
                fw.pop();
            while(!bw.empty())
                bw.pop();


        }

    }

    return 0;
}
