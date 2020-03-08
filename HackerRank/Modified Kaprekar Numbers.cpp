#include<bits/stdc++.h>
using namespace std;
int digitCount(long long int);
bool isKeprekar(long long int);
long long int power(int,int);
int main()
{
    long long int i,j,k,l,m,n,a,b,c,d;
    while(cin>>a>>b)
    {
        bool found  = false;
        for(i=a;i<=b;i++)
        {
            if(i==1)
            {
                cout<<i<<" ";
                found = true;
            }
            else if(isKeprekar(i))
            {
                cout<<i<<" ";
                found = true;
            }

        }
        if(!found)
            cout<<"INVALID RANGE";
        cout<<endl;


    }

    return 0;
}
int digitCount(long long int n)
{
    int digit = 0;
    while(n!=0)
    {
        n=n/10;
        digit++;
    }
    return digit;
}
bool isKeprekar(long long int n)
{
    long long int squareOfN = n*n;
    int digit = digitCount(squareOfN);

    if(digit%2==0)
    {
        int left = squareOfN / (power(10,digit/2));
        int right = squareOfN % (power(10,digit/2));
        if((left>0 && right>0 && left + right == n))
            return true;
        else return false;
    }
    else
    {
        int optionA = digit/2;
        int optionB = digit-optionA;
        int optionALeft = squareOfN / (power(10,optionA));
        int optionARight = squareOfN % (power(10,optionA));
        int optionBLeft = squareOfN / (power(10,optionB));
        int optionBRight = squareOfN % (power(10,optionB));

        if((optionALeft>0 && optionARight>0 && optionALeft + optionARight == n) || (optionBLeft>0 && optionBRight>0 && optionBLeft + optionBRight == n))
            return true;
        else return false;
    }
}
long long int power(int a,int b)
{
    long long int sum = 1;
    for(int i=1;i<=b;i++)
    {
        sum = sum*a;
    }
    return sum;
}
