#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int i,j,k,l,m,n,num[10000],x,y,z,tc;
    char str[100005];
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>str;
            int len = strlen(str);
            sort(str,str+len,greater<char>());
            cout<<str<<endl;
        }
    }
	return 0;
}
