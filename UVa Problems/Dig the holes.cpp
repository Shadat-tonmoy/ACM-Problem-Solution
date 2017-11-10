#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,input;
    int i,j,k,l,m,n,tc,a,b,c;
    while(cin>>tc)
    {
        for(a=1; a<=tc; a++)
        {
            bool possible=false;
            for(b=1; b<=2; b++)
            {
                cin>>input>>m>>n;
                if(possible)
                    break;
                int flag=0;
                str = "BGORVY";
                while(next_permutation(str.begin(),str.end()))
                {
                    //int c=0;
                    int cn=0;
                    int cnn=0;
                    flag =0;
                    if(m==0)
                        m=-4;
                    if(n==0)
                        n=-4;
                    string tmp = input;
                    //cout<<str<<" : "<<input<<" ";
                    for(i=0; i<input.size(); i++)
                    {
                        if(tmp[i]==str[i])
                        {
                            cn++;
                            tmp[i]='*';
                        }
                    }
                    //cout<<cn<<endl;
                    if(cn==m)
                    {
                        for(j=0; j<input.size(); j++)
                        {
                            if(tmp[j]!='*')
                            {
                                for(k=0; k<input.size(); k++)
                                {
                                    if(tmp[j]==str[k] && j!=k)
                                    {
                                        cnn++;
                                    }
                                }
                            }
                        }
                        if(cnn==n)
                        {
                            cout<<str<<endl;
                            cout<<"Possible"<<endl;
                            flag = 1;
                            possible = true;
                            break;
                        }
                    }
                }
                if(flag==1)
                    possible = true;
                else if(flag==0)
                    possible = false;
            }
            if(possible)
                cout<<"Possible"<<endl;
            else cout<<"Cheat"<<endl;
        }

    }

    return 0;
}


//RGBYOV BGVO 0 1
//RGBYOV VRBG 2 2
//RGBYOV RVGO 4 0
//RGBYOV RBVY 2 1
//RGBYOV ORVY 4 0
//RGBYOV GYBV 2 1
//RGBYOV YORV 0 2

