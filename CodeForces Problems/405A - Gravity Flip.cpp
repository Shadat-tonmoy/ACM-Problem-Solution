#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    vector <int> num;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>m;
            num.push_back(m);
        }
        sort(num.begin(),num.end());
        for(i=0;i<n;i++)
            cout<<num[i]<<" ";
        cout<<endl;
        num.clear();

    }


    return 0;

}


