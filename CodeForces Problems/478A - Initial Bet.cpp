#include<bits/stdc++.h>
using namespace std;
int sum (int n)
{
    if(n==0)
        return 0;
    else return n+sum(n-1);
}
main()
{
    int i,j,k,l,m,n,r,c1,c2,c3,c4,c5,total = 0;
    while(cin>>c1>>c2>>c3>>c4>>c5)
    {
        total = c1+c2+c3+c4+c5;
        if(total%5==0 && total>0)
            cout<<total/5<<endl;
        else cout<<-1<<endl;



    }
    return 0;

}


