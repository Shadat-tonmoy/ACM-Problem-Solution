#include<bits/stdc++.h>
using namespace std;
bool isOk(char num1[], char num2[])
{
    long long int a=0,b=0,len1=strlen(num1),len2 = strlen(num2),i;
    if(num1[0]=='0' || num2[0]=='0')
        return false;
    for(i=0; i<len1; i++)
    {
        a=a*10;
        a+=num1[i]-'0';
    }
    for(i=0; i<len2; i++)
    {
        b=b*10;
        b+=num2[i]-'0';
    }
    if(b-a==1)
        return true;
    else return false;

}
int main()
{
    int i,j,k,l,m,n,num[10000],q,a,c,len,sz;
    char str[50],num1[50],num2[50],tmp[50],firstNum[50];
    bool beautiful;
    while(cin>>n)
    {
        for(m=1; m<=n; m++)
        {
            cin>>str;
            beautiful = true;
            len = strlen(str);
            for(i=1; i<=len/2; i++)
            {
                sz = i;
                firstNum[0]='\0';
                for(j=0; j<len;)
                {
                    if(j+(2*sz)<=len)
                    {
                        beautiful = true;
                        for(k=j,a=0; k<j+sz; k++,a++)
                            num1[a]=str[k];
                        num1[a]='\0';
                        for(l=k,a=0; l<k+sz; a++,l++)
                            num2[a]=str[l];
                        num2[a]='\0';
                        //cout<<"num1 : "<<num1<<" num2 : "<<num2<<endl;
                        if(firstNum[0]=='\0')
                            strcpy(firstNum,num1);
                        if(isOk(num1,num2))
                        {
                            j+=sz;
                        }
                        else
                        {
                            num2[a]=str[l];
                            num2[a+1]='\0';
                            //cout<<"num1 : "<<num1<<" num2 : "<<num2<<endl;
                            if(isOk(num1,num2))
                            {
                                //cout<<"sz : "<<sz<<" "<<j<<endl;
                                j += sz;
                                sz++;

                            }
                            else
                            {
                                beautiful = false;

                                break;
                            }
                        }
                    }
                    else
                    {
                        //cout<<num2<<endl;
                        if(len-(j+sz)>0)
                            beautiful = false;
                        break;
                    }
                    //cout<<j<<endl;
                }
                if(beautiful)
                {
                    cout<<"YES "<<firstNum<<endl;
                    break;
                }
            }
            if(!beautiful || len==1)
                cout<<"NO"<<endl;

        }
    }

    return 0;
}
