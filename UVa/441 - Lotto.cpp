#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d,e,f,g,h,x,y,z,num[100000],output[100];
    bool firstCase = true;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(!firstCase)
            cout<<endl;
        if(firstCase)
            firstCase = false;
        for(i=0;i<n;i++)
            cin>>num[i];
        i=0;
        for(a=0;a<n;a++)
        {
            i=0;
            output[i++] = num[a];
            for(b=a+1;b<n;b++)
            {
                output[i++] = num[b];
                for(c=b+1;c<n;c++)
                {
                    output[i++] = num[c];
                    for(d=c+1;d<n;d++)
                    {
                        output[i++] = num[d];
                        for(e=d+1;e<n;e++)
                        {
                            output[i++] = num[e];
                            for(f=e+1;f<n;f++)
                            {
                                output[i++] = num[f];
                                if(i>=5)
                                {
                                    //print output
                                    for(x=0;x<i;x++)
                                    {
                                        if(x!=i-1)
                                            cout<<output[x]<<" ";
                                        else cout<<output[x]<<endl;
                                    }
                                }
                                i--;
                            }
                            i--;
                        }
                        i--;
                    }
                    i--;
                }
                i--;
            }
            i--;
        }
        
    }
}