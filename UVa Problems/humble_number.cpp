#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,temp,c,p[10],n,a,k,l,m;
    vector <int> final_list;
    bool humble=true;
    p[0]=2;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=11;
    p[5]=13;
    for(n=1; n<=2000; n++)
    {
        temp = n;
        k = n;
        i=0;
        humble = true;
        while(k>1)
        {
            if(i>3)
            {
                humble = false;
                break;
            }
            if(k%p[i]==0)
            {
                //cout<<p[i]<<endl;
                while(k%p[i]==0)
                {
                    a = p[i];
                    //cout<<a<<" ";//factor.push_back(a);
                    k=k/p[i];
                }
            }
            i++;
        }
        if(humble)
            final_list.push_back(temp);
    }
    while(cin>>m)
    {
        cout<<final_list[m]<<endl;
        //cout<<temp<<" is humble"<<endl;
        //else cout<<temp<<" is not humble"<<endl;
        //cout<<endl;
        /*for(j=0;j<factor.size();j++)
            cout<<factor[j]<<endl;*/
    }


    return 0;
}
