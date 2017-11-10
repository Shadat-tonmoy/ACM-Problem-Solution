#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b,c,d,e,f,x,y,tmp[50];
    set<int> uni;
    set<int>::iterator it;
    map<int,int> freq;
    while(cin>>a>>b>>c>>d>>e>>f)
    {
        freq.clear();
        uni.clear();
        freq[a]++;
        freq[b]++;
        freq[c]++;
        freq[d]++;
        freq[e]++;
        freq[f]++;
        uni.insert(a);
        uni.insert(b);
        uni.insert(c);
        uni.insert(d);
        uni.insert(e);
        uni.insert(f);
        if(uni.size()==1)
        {
            cout<<"Elephant"<<endl;
        }
        else if(uni.size()==2)
        {
            for(it=uni.begin(),i=0;it!=uni.end();it++,i++)
            {
                tmp[i]=freq[*it];
            }
            if(tmp[0]<4 && tmp[1]<4)
                cout<<"Alien"<<endl;
            else if((tmp[0]==4 && tmp[1]==2) || (tmp[1]==4 && tmp[0]==2))
                cout<<"Elephant"<<endl;
            else if((tmp[0]==5 && tmp[1]==1) || (tmp[1]==5 && tmp[0]==1))
                cout<<"Bear"<<endl;

        }
         else if(uni.size()==3)
        {
            for(it=uni.begin(),i=0;it!=uni.end();it++,i++)
            {
                tmp[i]=freq[*it];
            }
            //cout<<tmp[0]<<" "<<tmp[1]<<" "<<tmp[2]<<endl;
            if(tmp[0]<4 && tmp[1]<4 && tmp[2]<4)
                cout<<"Alien"<<endl;
            else if((tmp[0]==4 && tmp[1]==tmp[2]) || (tmp[1]==4 && tmp[0]==tmp[2]) || (tmp[2]==4 && tmp[0]==tmp[1]) )
                cout<<"Bear"<<endl;
            else
                cout<<"Elephant"<<endl;

        }
        else cout<<"Alien"<<endl;






    }



    return 0;

}


