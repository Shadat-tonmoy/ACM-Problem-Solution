#include<bits/stdc++.h>
using namespace std;
string output[1000];
int main()
 {
    int i,j,k,l,m,n,num[10000],x,y,z,tc;
    string str;
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>str;
            int len = str.size();
            j=0;
            k=0;
            string tmp;
            for(i=0;i<len;i++)
            {
                if(str[i]!='.')
                {
                    tmp.append(str[i]);
                    //tmp[j++]=str[i];
                }
                else {
                    //tmp[j]='\0';
                    output[k]=tmp;
                    k++;
                    j=0;
                }
            }
            //output[k][j]='\0';

            for(i=k;i>=0;i--)
            {
                cout<<output[i];
                if(i==0)
                    cout<<endl;
                else cout<<".";

            }

        }
    }
	return 0;
}
