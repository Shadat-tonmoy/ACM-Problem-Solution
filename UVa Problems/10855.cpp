#include<bits/stdc++.h>
using namespace std;
char grid_a[500][500],r_grid[500][500],grid_b[500][500];
int main()
{
    int i,j,k,l,m,n,a,b,c=0,dim_a,dim_b,x,y,z,deg,degree[10];
    bool f = false;
    while( cin>>dim_a>>dim_b)
    {
        if(dim_a==0 && dim_b ==0)
            break;
        f = false;
        c = 0;
        for(i=0; i<dim_a; i++)
            for(j=0; j<dim_a; j++)
                cin>>grid_a[i][j];
        for(i=0; i<dim_b; i++)
            for(j=0; j<dim_b; j++)
                cin>>grid_b[i][j];
        memset(degree,0,sizeof degree);
        for(deg=0; deg<=3; deg++)
        {
            c=0;
            for(i=0; i<dim_a; i++)
            {
                for(j=0; j<dim_a; j++)
                {
                    //printf("I is %d J is %d \n",i,j);
                    if(grid_a[i][j]==grid_b[0][0])
                    {
                        a=i;
                        b=j;
                        //printf("Found at %d %d\n",a,b);
                        for(x=0; x<dim_b; x++)
                        {
                            int cu=0;
                            for(y=0; y<dim_b; y++)
                            {
                                if(grid_a[a][b]==grid_b[x][y])
                                {

                                    f=true;
                                    //printf("    Matched at %d %d with %d %d\n",a,b,x,y);
                                    b++;
                                    //printf("B is %d \n",b);;
                                    cu++;
                                    // printf("CU is %d \n",cu);
                                    //printf("CU : %d ",cu);
                                    if(cu==dim_b)
                                    {
                                        b=j;
                                        a++;
                                        //printf("B under cu=dim and a under\n",b,a);
                                    }
                                }
                                else
                                {
                                    f=false;
                                    // printf("   Not Matched at %d %d with %d %d\n",a,b,x,y);
                                    break;
                                }
                            }
                            if(!f)
                            {
                                //printf("Not Founnd so breaking\n");
                                break;
                            }
                        }
                        if(f)
                        {
                            c++;
                            //j++;
                        }
                        //else j++;
                    }
                }
            }
            degree[deg]=c;
            for(i=0; i<dim_b; i++)
                for(j=0,k=dim_b-1; j<dim_b; j++,k--)
                    r_grid[i][j]=grid_b[k][i];
            for(i=0; i<dim_b; i++)
                for(j=0; j<dim_b; j++)
                    grid_b[i][j]=r_grid[i][j];

        }
        for(i=0; i<3; i++)
        {
            //f(i<3)
                cout<<degree[i]<<" ";

        }cout<<degree[i]<<endl;
        for(i=0;i<dim_a;i++)
            for(j=0;j<dim_a;j++)
                grid_a[i][j]='\0';
        for(i=0;i<dim_b;i++)
            for(j=0;j<dim_b;j++)
                grid_b[i][j]='\0';
        //for(i=0;i<dim_b;i++)
          //  for(j=0;j<dim_b;j++)
            //    r_grid[i][j]='\0';

    }
    return 0;
}
