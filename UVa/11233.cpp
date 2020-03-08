#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n;
    string singular[1000],plural[1000],word[10000];
    while(cin>>l>>n)
    {
        for(i=0;i<l;i++)
        {
            cin>>singular[i]>>plural[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>word[i];
        }
        for(i=0;i<n;i++)
        {
            int flag = 0;
            for(j=0;j<l;j++)
            {
                if(word[i] == singular[j])
                {
                    cout<<plural[j]<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                int len = word[i].size();
                if(word[i][len-1]=='y' && (word[i][len-2]!='a' &&  word[i][len-2]!='e' && word[i][len-2]!='i' && word[i][len-2]!='o' && word[i][len-2]!='u'))
                {
                    word[i].erase(word[i].begin()+len-1);
                    word[i].append("ies");
                    cout<<word[i]<<endl;
                }
                else if(word[i][len-1]=='o' || word[i][len-1]=='s' || word[i][len-1]=='x' || (word[i][len-1]=='h' && word[i][len-2]=='c') || (word[i][len-1]=='h' && word[i][len-2]=='s') )
                {
                    word[i].append("es");
                    cout<<word[i]<<endl;
                }
                else
                {
                    word[i].append("s");
                    cout<<word[i]<<endl;
                }
            }
        }

    }
    return 0;
}
