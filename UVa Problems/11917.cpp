#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,a,b,c,d,crs;
    map <string, int> data;
    map <string, int> :: iterator it;
    string str,rem;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            cin>>crs;
            //getchar();
            for(i=0; i<crs; i++)
            {
                cin>>str;
                //getchar();
                cin>>n;
                //getchar();
                data[str]=n;
            }
            cin>>n;
            cin>>rem;
            it = data.find(rem);
            if(it!=data.end())
            {
                if(it->second <=n)
                    printf("Case %d: Yesss\n",l);
                else if(it->second <= n+5 )
                    printf("Case %d: Late\n",l);
                else printf("Case %d: Do your own homework!\n",l);
            }
            else printf("Case %d: Do your own homework!\n",l);
            /*printf("Output : \n");
            for(it=data.begin();it!=data.end();it++)
                cout<<it->first<<" "<<it->second<<endl;*/
            data.clear();

        }
    }

    return 0;
}
