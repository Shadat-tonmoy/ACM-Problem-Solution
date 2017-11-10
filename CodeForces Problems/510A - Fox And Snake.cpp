#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,r,c;
    char str[1000];
    bool head,tail;
    while(cin>>r>>c)
    {
        head = true;
        tail = false;
        for(i=0;i<c;i++)
            str[i]='#';
        str[i]='\0';
        for(i=1;i<=r;i++)
        {
            if(i%2==1)
                cout<<str<<endl;
            else
            {
                if(head)
                {
                    cout<<setfill('.')<<setw(c)<<'#'<<endl;;
                    tail = true;
                    head = false;
                }
                else
                {
                    cout<<'#'<<setfill('.')<<setw(c)<<' '<<endl;
                    head = true;
                    tail=false;

                }
            }
        }



    }
    return 0;

}


