#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m=0,n,match;
    string dictionary[10000],puzzle;
    while(cin>>dictionary[m])
    {
        match = 0;
        while(1)
        {
            if(dictionary[m][0]=='#')
                break;
            cin>>dictionary[++m];
        }
        getchar();
        while(1)
        {
            getline(cin,puzzle);
            if(puzzle[0]=='#')
                break;
            else
            {
                int c_match = 0;
                match = 0;
                for(i=0; i<m; i++)
                {
                    string temp = dictionary[i];
                    string pzl_tmp = puzzle;
                    int pzl_len = pzl_tmp.size();
                    int dic_len = temp.size();
                    c_match = 0;
                    for(j=0; j<dic_len; j++)
                    {
                        for(k=0; k<pzl_len; k++)
                        {
                            if(temp[j]==pzl_tmp[k])
                            {
                                c_match++;
                                pzl_tmp.erase(pzl_tmp.begin()+k);
                                break;
                            }
                        }
                        if(c_match==0)
                            break;
                    }
                    if(c_match==dic_len)
                        match++;
                }
                cout<<match<<endl;
            }
        }
        m=0;
    }

    return 0;
}
