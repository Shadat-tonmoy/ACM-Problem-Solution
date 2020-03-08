#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,min_move,tmp;
    string str;
    map<char,int> circle;

    while(cin>>str)
    {
        min_move = 0;
        for(char ch='a',i=0;ch<='z';ch++,i++)
        {
            circle[ch] = i;
        }

        for(i=0;i<str.size();i++)
        {
            char ch = str[i];
            if(circle[ch] < 26 - circle[ch])
            {
                tmp = circle[ch];
                min_move+=tmp;
                //printf("For clockwise dis %d : \n",tmp);
                for(char ch2 = 'a';ch2<='z';ch2++)
                {
                    circle[ch2] -= tmp;
                    if(circle[ch2]<0)
                        circle[ch2] = 26+circle[ch2];
                    //printf("%c -- '%d' \t",ch2,circle[ch2]);


                }
            }
            else
            {
                tmp = 26 - circle[ch];
                min_move+=tmp;
                //printf("For anticlockwise dis %d : \n",tmp);
                for(char ch2 = 'a';ch2 <='z';ch2++)
                {
                    circle[ch2] += tmp;
                    if(circle[ch2]>=26)
                        circle[ch2] = circle[ch2]%26;
                    //printf("%c -- '%d' \t",ch2,circle[ch2]);


                }
            }
        }
        cout<<min_move<<endl;
        circle.clear();





    }



    return 0;

}


