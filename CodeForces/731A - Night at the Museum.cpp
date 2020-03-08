#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,min_move,tmp;
    string str;
    map<char,int> clockwise,anticlockwise;
    map<char,int> :: iterator it;

    while(cin>>str)
    {
        min_move = 0;
        for(char ch='a',i=0;ch<='z';ch++,i++)
        {
            clockwise[ch] = i;
        }
        anticlockwise['a']=0;
        for(char ch='z',i=1;ch>'a';ch--,i++)
        {
            anticlockwise[ch] = i;

        }

        for(i=0;i<str.size();i++)
        {
            char ch = str[i];
            if(anticlockwise[ch] < clockwise[ch])
            {
                tmp = anticlockwise[ch];
                min_move+=tmp;
                //printf("anticlockwise -- \n");
                for(char ch2 = 'z';ch2>='a';ch2--)
                {

                    anticlockwise[ch2] = anticlockwise[ch2] - tmp;
                    if(anticlockwise[ch2]<0)
                      anticlockwise[ch2] = 26+anticlockwise[ch2];
                    //printf("%c --> '%d' ",ch2,anticlockwise[ch2]);


                }
                //printf("clockwise -- \n");
                for(char ch2 = 'a';ch2<='z';ch2++)
                {
                    clockwise[ch2] += tmp;
                    if(clockwise[ch2]>=26)
                        clockwise[ch2] = clockwise[ch2]%26;
                    //printf("%c --> '%d' ",ch2,clockwise[ch2]);

                }
            }
            else
            {
                tmp = clockwise[ch];
                min_move+=tmp;
                for(char ch2 = 'z';ch2>='a';ch2--)
                {
                    clockwise[ch2] -= tmp;
                    if(clockwise[ch2]<0)
                        clockwise[ch2] = 26+clockwise[ch2];

                }
                for(char ch2 = 'a';ch2<='z';ch2++)
                {
                    anticlockwise[ch2] += tmp;
                    if(anticlockwise[ch2]>=26)
                        anticlockwise[ch2] = anticlockwise[ch2]%26;
                }


            }
        }
        cout<<min_move<<endl;
        clockwise.clear();
        anticlockwise.clear();




    }



    return 0;

}


