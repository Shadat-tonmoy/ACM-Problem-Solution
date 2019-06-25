//url
#include <bits/stdc++.h>
using namespace std;
bool isBad(bool isVowel,char str[],int i);
bool isVowel(char ch);
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
    char str[1000];
    while(cin>>tc)
    {
        for(x=1; x<=tc; x++)
        {
            cin>>str;
            int len = strlen(str);
            bool isGood = true;
            for(i=0; i<len; i++)
            {
                if(i<len-5 && isVowel(str[i]))
                {
                    if(isBad(true,str,i)){
                        cout<<0<<endl;
                        isGood = false;
                        break;
                    }
                }
                else if(i<len-3){
                    if(isBad(false,str,i)){
                        cout<<0<<endl;
                        isGood = false;
                        break;
                    }
                }
            }
            if(isGood)
                cout<<1<<endl;



        }
    }
    return 0;
}
bool isBad(bool isVowelCheck,char str[],int i)
{
    int c=0,j,len=strlen(str);
    if(isVowelCheck)
    {
        for(j=i; j<=i+5; j++)
        {
            if(isVowel(str[j]) || str[j]=='?')
                c++;
        }
        // cout<<"For Vowel "<<c<<endl;
        if(c>5)
            return true;
        else return false;
    }
    else
    {
        for(j=i; j<=i+3; j++)
        {
            if(!isVowel(str[j]) || str[j]=='?')
                c++;
        }
        // cout<<"For Consonent "<<c<<endl;
        if(c>3)
            return true;
        else return false;

    }



}
bool isVowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    else return false;

}
