#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int year)
{
    return ((year%4==0) && (year%100!=0)) || (year%400==0);
}
bool isLeapYearJulian(int year)
{
    return year%4==0;
}
int main()
{
    int i,n,year,j,k,l,m,sum,day,num[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    while(cin>>year)
    {
        i=0;
        if(year==1918)
        {
            printf("26.09.1918");
            continue;
        }
        bool isLeap = false;
        if(year<1918)
            isLeap = isLeapYearJulian(year);
        else if(year>1918)
            isLeap = isLeapYear(year);
        if(isLeap)
            num[1]=29;
        else num[1]=28;
        //cout<<isLeapYear(year)<<endl;
        sum=0;
        while(sum<=256)
            sum+=num[i++];
        sum-=num[--i];
        day = 256-sum;
        if(day<10)
            printf("0%d.",day);
        else printf("%d.",day);
        printf("0%d.%d\n",i+1,year);
    }


}
