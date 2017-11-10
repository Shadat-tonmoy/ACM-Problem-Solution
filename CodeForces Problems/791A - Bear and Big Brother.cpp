#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b,tmpA,tmpB;
    while(cin>>a>>b)
    {
        for(i=1;;i++)
        {
            tmpA = a*3;
            tmpB = b*2;
            a = tmpA;
            b = tmpB;
            if(tmpA>tmpB)
            {
                cout<<i<<endl;
                break;
            }

        }
    }



    return 0;

}


