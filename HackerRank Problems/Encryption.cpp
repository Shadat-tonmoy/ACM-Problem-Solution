#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,p,m,n,a,b,tc,ans,len,row,col,rowTmp,colTmp;
    string input;
    double root;
    while(cin>>input)
    {
        len = input.size();
        root = sqrt(len);
        row = floor(root);
        col = ceil(root);
        rowTmp = row;
        colTmp = col;
        //cout<<root<<" "<<row<<" "<<col<<endl;
        while(row*col<len)
        {
            a = col+1;
            b = row+1;
            if(a <= colTmp && a>=row)
                col++;
            else if(b <= col)
                row++;
        }
        //cout<<root<<" "<<row<<" "<<col<<endl;
        for(i=0;i<col;i++)
        {
            k = i;
            while(k<len)
            {
                cout<<input[k];
                k+=col;
            }
            cout<<" ";
        }
        cout<<endl;




    }
    return 0;
}
