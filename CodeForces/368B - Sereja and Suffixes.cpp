#include <bits/stdc++.h>
using namespace std;
int num[100009];
int main()
{
    int i,j,k,l,m,n,a,b,c;
    string str;
    while(cin>>n>>m)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        map<int,bool> found;
        map<int,int> solution;
        c=0;
        for(i=n-1;i>=0;i--)
        {
            if(!found[num[i]])
            {
                found[num[i]]=true;
                c++;
                solution[i]=c;
            }
            else solution[i]=c;
        }
        for(i=0;i<m;i++)
        {
            cin>>a;
            cout<<solution[a-1]<<endl;


        }
    }
    return 0;
}
