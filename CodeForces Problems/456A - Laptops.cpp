#include<bits/stdc++.h>
using namespace std;
struct laptop{
    int price,quality;
} laptopArray[100005];
bool comparePrice(laptop a,laptop b)
{
    return a.price<b.price;
}
int main()
{
    int i,j,k,l,m,n,x,y,price,quality,quality_next;
    bool happy= false;
    while(cin>>n)
    {
        happy = false;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            laptopArray[i].price=x;
            laptopArray[i].quality=y;
        }
        sort(laptopArray,laptopArray+n,comparePrice);

        for(i=0;i<n;i++)
        {
            price = laptopArray[i].price;
            quality = laptopArray[i].quality;

            if(i<n-1)
            {
                quality_next = laptopArray[i+1].quality;
            }
            //cout<<"Price : "<<price<<" Quality : "<<quality<<" next: "<<quality_next<<endl;
            if(quality_next<quality)
            {
                happy=true;
                break;
            }

        }
        if(happy)
        {
            cout<<"Happy Alex"<<endl;
        }
        else cout<<"Poor Alex"<<endl;
    }










    return 0;

}


