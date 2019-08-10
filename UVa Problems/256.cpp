#include<bits/stdc++.h>
using namespace std;
bool isQuirksome(int num,int u)
{
    int div,num1,num2;
    if(u == 100)
        div = u/10;
    else if (u==10000)
        div = u / 100;
    else if (u==1000000)
        div = u/1000;
    else if (u==100000000)
        div = u/10000;
    num1 = num/div;
    num2 = num%div;
    int ans = (num1+num2) * (num1+num2);
    if(ans == num)
        return true;
    else return false;


}
int main ()
{
    int i,j,k,l,m,n,a,b,c;
    string str;
    while(cin>>n)
    {
        int up;
        if (n==2)
            up=100;
        else if(n==4)
            up=10000;
        else if(n==6)
            up=1000000;
        else if(n==8)
            up=100000000;

        for(i=0; i<up; i++)
        {
            if(isQuirksome(i,up))
                cout<<setw(n)<<setfill('0')<<i<<endl;
        }
    }
    return 0;
}
