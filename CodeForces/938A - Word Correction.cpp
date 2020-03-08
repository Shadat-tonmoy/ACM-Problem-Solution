#include<bits/stdc++.h>
using namespace std;
int num[500000];
bool isVowel(char ch)
{
    if(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
        return true;
    return false;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,d;
    string str;
    while(cin>>n)
    {
        cin>>str;
        while(str.size()>0)
        {
            bool found = false;
            for(i=0;i<str.size();i++)
            {
                if(isVowel(str[i]) && isVowel(str[i+1]))
                {
                    str.erase(i+1,1);
                    found = true;
                    break;
                }
            }
            if(!found)
                break;
        }
        cout<<str<<endl;





    }


    return 0;
}

