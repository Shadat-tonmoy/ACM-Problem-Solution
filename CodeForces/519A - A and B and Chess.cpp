#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,black,white;
    char str[10000];
    black=0;
    white=0;
    for(j=1; j<=8; j++)
    {
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='q')
                black+=9;
            else if(str[i]=='Q')
                white+=9;
            else if(str[i]=='r')
                black+=5;
            else if(str[i]=='R')
                white+=5;
            else if(str[i]=='b')
                black+=3;
            else if(str[i]=='B')
                white+=3;
            else if(str[i]=='n')
                black+=3;
            else if(str[i]=='N')
                white+=3;
            else if(str[i]=='p')
                black+=1;
            else if(str[i]=='P')
                white+=1;
        }
    }
    if(black>white)
        cout<<"Black"<<endl;
    else if (white>black)
        cout<<"White"<<endl;
    else if(black==white)
        cout<<"Draw"<<endl;
    //cout<<black<<" "<<white<<endl;






    return 0;
}
