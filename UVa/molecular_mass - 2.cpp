#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
    char name[1000];
    int i,j,k,l,m,n,t,sum=0;
    double mass=0;
    while(cin>>t)
    {
        for(j=1; j<=t; j++)
        {
            mass=0;
            cin>>name;
            l=strlen(name);
            for(i=0; i<l;)
            {
                if((name[i]=='C' || name[i]=='H' || name[i]=='O' || name[i]=='N') && (name[i+1]>=48 && name[i+1]<=57))
                {
                    sum=0;
                    for(k=i+1; (name[k]>=48 && name[k]<=57); k++)
                    {
                        sum=sum*10;
                        sum=sum+(name[k]-48);
                    }
                    switch(name[i])
                    {
                    case 'C' :
                        mass=mass + ((12.01)*(double)sum);
                        break;
                    case 'H' :
                        mass=mass + ((1.008)*(double)sum);
                        break;
                    case 'O' :
                        mass=mass + ((16.00)*(double)sum);
                        break;
                    case 'N' :
                        mass=mass + ((14.01)*(double)sum);
                        break;
                    }
                    i=k;
                }
                else
                {
                    switch(name[i])
                    {
                    case 'C' :
                        mass=mass + 12.01;
                        break;
                    case 'H' :
                        mass=mass + (1.008);
                        break;
                    case 'O' :
                        mass=mass + (16.00);
                        break;
                    case 'N' :
                        mass=mass + (14.01);
                        break;
                    }
                    i++;
                }
            }
            printf("%.3lf\n",mass);
        }
    }

}
