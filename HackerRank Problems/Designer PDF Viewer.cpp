#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,s,maxi,sz,ans;
    map<char,int> height;
    string str;
    char ch;
    for(i=0,ch='a';i<26;i++,ch++)
    {
        cin>>a;
        height[ch]=a;
    }
    cin>>str;
    sz = str.size();
    maxi=0;
    for(i=0;i<sz;i++)
    {
        maxi = max(maxi,height[str[i]]);
    }
    ans = maxi*sz;
    cout<<ans<<endl;


    return 0;
}
