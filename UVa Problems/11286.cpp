#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c=0,maxi=0,ans;
    map <string,int> freq;
    map <string,int> :: iterator it;
    vector <int> num;
    string str,max_fre;
    char st[10000];
    while(cin>>n)
    {
        if(n==0)
            break;
        maxi = 0;
        getchar();
        c=0;
        b=0;
        for(m=1;m<=n;m++)
        {
            b=0;
            for(i=0;i<5;i++)
            {
                cin>>a;
                num.push_back(a);
            }
            sort(num.begin(),num.end());
            //printf("After Sorted : \n");
            //for(i=0;i<num.size();i++)
                //cout<<num[i]<<endl;
            //printf("Fuck\n\n");
            for(i=0;i<num.size();i++)
            {
                int temp = num[i];
                while(temp!=0)
                {
                    st[b++]=temp%10+'0';
                    temp = temp/10;
                }
                str = st;
                //cout<<str<<endl;
            }
            if(freq[str]==0)
                freq[str]=1;
            else freq[str]=freq[str]+1;
            if(freq[str]>=maxi)
            {
                maxi = freq[str];
                max_fre = str;
            }
            //cout<<str<<endl;
            //cout<<freq[str]<<endl;
            num.clear();
        }
        for(it=freq.begin();it!=freq.end();it++)
        {
            if(it->first==max_fre)
                it->second = maxi;
        }
        for(it=freq.begin();it!=freq.end();it++)
        {
            if(it->second==maxi)
                c++;
        }
        //cout<<"C : "<<c<<" Max : "<<maxi<<endl;
        ans = c*maxi;
            //cout<<it->first<<" "<<it->second<<endl;
        cout<<ans<<endl;
        freq.clear();
    }
    return 0;
}
