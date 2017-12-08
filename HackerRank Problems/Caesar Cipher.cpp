#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,len;
    string str;
    while(cin>>n)
    {
        cin>>str>>k;

        for(i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                m = str[i]+k;
                if(m>122)
                {
                    while(m>122)
                        m = (m%122) + 96;
                    cout<<(char)m;
                }
                else
                {
                    cout<<(char)m;

                }
            }

            else if(str[i]>='A' && str[i]<='Z')
            {
                m = str[i]+k;
                if(m>90)
                {
                    while(m>90)
                        m = (m%90) + 64;
                    cout<<(char)m;
                }
                else
                {
                    cout<<(char)m;

                }
            }

            else
                cout<<str[i];
        }
        cout<<endl;
    }




    return 0;
}
