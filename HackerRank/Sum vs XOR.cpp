#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int findUnsetDigit(long long int n)
{
    int numOfUnsetDigit = 0,a;
    while(n!=0)
    {
        a=n%2;
        if(a==0)
            numOfUnsetDigit++;
        n=n/2;
    }
    return numOfUnsetDigit;

}
int main()
{
    long long int i,j,k,l,r,m,n,a,b,c;


    while(cin>>n)
    {
        m = findUnsetDigit(n);
        c = pow(2,m);
        cout<<c<<endl;
    }
}

/*
Approach :

01. We know (a+b) = (a^b) + (a&b)
    So, if (a&b) == 0 then, (a+b) = (a^b)
    So, our target is to find for (n&i) = 0 for 0<=i<=n

02. For any 'i' to be (n&i) = 0 our 'i' should be in the form such
    that for all the '1' bit in 'n', the corresponding bit of 'i' is
    '0' and for all the '0' bit in 'n', the corresponding bit of 'i'
    is either '0' or '1'

03. So, we have to find out the number of '0's in 'n' and for every
    '0' we have two choice '0' or '1'.

04. So, our ultimate result is 2^(number of '0's in 'n')

*/












