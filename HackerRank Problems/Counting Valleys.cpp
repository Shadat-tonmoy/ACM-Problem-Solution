#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,flag,valley;
    bool up,down;
    char ch;
    while(cin>>n)
    {
        up = false;
        down = false;
        flag = 0;
        valley = 0;
        for(i=0;i<n;i++)
        {
            cin>>ch;
            if(ch=='U')
            {
                up = true;
                down = false;
                flag++;
            }
            else
            {
                up = false;
                down = true;
                flag--;
            }
            if(flag==0 && up)
                valley++;
        }
        if(flag<0 && up)
            valley++;
        cout<<valley<<endl;


    }

    return 0;
}
