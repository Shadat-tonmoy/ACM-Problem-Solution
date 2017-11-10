#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int i,j,tc,d,d_size,q,h_p,l_p,q_p;
    string name[100005];
    vector <int> lowest;
    vector <int> highest;
    while(cin>>tc)
    {
        for(d=1;d<=tc;d++)
        {
            cin>>d_size;
            for(i=0;i<d_size;i++)
            {
                cin>>name[i]>>l_p>>h_p;
                lowest.push_back(l_p);
                highest.push_back(h_p);
            }
            cin>>q;
            for(i=0;i<q;i++)
            {
                cin>>q_p;
                int c = 0;
                int found;
                for(j=0;j<d_size;j++)
                {
                    if(q_p>=lowest[j] && q_p<=highest[j])
                    {
                        c++;
                        found = j;
                    }
                    if(c>1)
                    {
                        cout<<"UNDETERMINED"<<endl;
                        break;
                    }
                }
                if(c==1)
                    cout<<name[found]<<endl;
                else if (c==0)
                    cout<<"UNDETERMINED"<<endl;
            }
            if(d!=tc)
                cout<<endl;
            highest.clear();
            lowest.clear()
;        }
    }

    return 0;
}
