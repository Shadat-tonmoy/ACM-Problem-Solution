#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,q,mor[105],eve[105],sum,d,r;
    char ch;
    set <char> st;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>ch;
            st.insert(ch);
        }
        if(n>26)
            sum=-1;
        else sum = n-st.size();
        cout<<sum<<endl;
        st.clear();
    }






    return 0;
}

