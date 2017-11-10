#include<iostream>
#include<string>
using namespace std;
int main()
{
    string song[18],name[100];
    int i,j,k,l,m,n,d;
    song[0]="Happy";
    song[1]="birthday";
    song[2]="to";
    song[3]="you";
    song[4]="Happy";
    song[5]="birthday";
    song[6]="to";
    song[7]="you";
    song[8]="Happy";
    song[9]="birthday";
    song[10]="to";
    song[11]="Rujia";
    song[12]="Happy";
    song[13]="birthday";
    song[14]="to";
    song[15]="you";
    cin>>n;
    for(i=0; i<n; i++)
        cin>>name[i];
    if(n<16)
    {
        for(i=0,j=0; i<16; i++,j++)
        {
            if(j==n)
                j=0;
            cout<<name[j]<<": "<<song[i]<<endl;
        }
    }
    else
    {
        d = (n/16)+1;
        int c=0;

        for(i=0,j=0; ;i++,j++)
        {
            if(c==d*16)
                break;
            if(i==16)
                i=0;
            if(j==n)
            {
                j=0;
            }
            cout<<name[j]<<": "<<song[i]<<endl;
            c++;
        }
    }
    return 0;
}
