#include<bits/stdc++.h>
using namespace std;
int num[500000];
int main()
{
    int i,j,k,l,m,n,a,b,c,d,maxFreq;;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
            cin>>num[i];
        bool found = false;
        for(i=1;i<=n;i++)
        {
            set<int> uni;
            a = num[i];
            b = num[a];
            c = num[b];
            uni.insert(i);
            uni.insert(a);
            uni.insert(b);
            uni.insert(c);

            if(uni.size()==3 && (i==a || i==b || i==c))
            {
                found = true;
                break;
            }
        }
        if(found)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;





    }


    return 0;
}

