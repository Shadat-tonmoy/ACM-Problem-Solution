#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d,sum,total_row,total_col,num_row,num_col,taken_row,taken_col,cell;
    map<int,bool> rows,cols;
    char ch;
    while(cin>>total_row>>total_col)
    {
        num_row = 0;
        num_col = 0;
        for(i=1;i<=total_row;i++)
        {
            for(j=1;j<=total_col;j++)
            {
                cin>>ch;
                if(ch=='S')
                {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        for(i=1;i<=total_row;i++)
        {
            if(!rows[i])
                num_row++;
        }
        for(i=1;i<=total_col;i++)
        {
            if(!cols[i])
                num_col++;
        }

        cell = (num_row * total_col) + (num_col * total_row - (num_row * num_col));
        cout<<cell<<endl;
        rows.clear();
        cols.clear();




    }


    return 0;

}


