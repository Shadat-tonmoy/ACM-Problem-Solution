#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,sum=0,b;
    string num;
    while(cin>>num)
    {
        if(num=="0")
            break;
        sum = 0;
        k = 1;
        for(i=num.size()-1;i>=0;i--)
        {
            b = (num[i]-'0') * (pow(2,k)-1);
            sum += b;
            k++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
