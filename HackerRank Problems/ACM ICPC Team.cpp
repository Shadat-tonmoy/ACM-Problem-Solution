#include<bits/stdc++.h>
using namespace std;
int solvable;
map<int,int> freq;
int canSolve(string,string);
int main()
{
    int i,j,l,p,m,n,a,b,maxi,sz,tmp,c,ans,team,solvable,maxSolvable;
    string bits[502];
    while(cin>>n>>m)
    {
        solvable = 0;
        team = 0;
        for(i=0;i<n;i++)
        {
            cin>>bits[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                solvable = canSolve(bits[i],bits[j]);
                maxSolvable = max(maxSolvable,solvable);
                freq[solvable]++;
            }
        }
        cout<<maxSolvable<<endl<<freq[maxSolvable]<<endl;
        freq.clear();
    }
    return 0;
}
int canSolve(string str1,string str2)
{
    int i,c=0,len=str1.size();
    for(i=0;i<len;i++)
    {
        if(str1[i]-'0' || str2[i]-'0')
        {
            c++;
        }
    }
    return c;
}
