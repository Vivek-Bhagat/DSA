#include <stdio.h>
#include <stdlib.h>
/*for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d",mat1[i][j]);
        }
        printf("\n");
    }*/

int main()
{
    int a,b;
    printf("enter the row and column for the matrix=");
    scanf("%d%d",&a,&b);
    int mat1[a][b],mat2[a][b];
    printf("enter the elements of matrix1=\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter the values of second matrix=");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int c=a*b;
    int size1=0,size2=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           if(mat1[i][j]==0)
           {
            size1+=1;
           }
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           if(mat2[i][j]==0)
           {
            size2+=1;
           }
        }
    }
    int elem1=c-size1;
    int elem2=c-size2;
    int spa1[elem1][3],spa2[elem2][3];
    if(size1>elem1&&size2>elem2)
    {
        printf("sparse matrix");
        int k=0,l=0;
        for(int i=0;i<a;i++)
        {

            for(int j=0;j<b;j++)
            {
               if(mat1[i][j]!=0)
               {
                   spa1[k][0]=i;
                   spa1[k][1]=j;
                   spa1[k][2]=mat1[i][j];
                   k++;


               }
            }
        }
        for(int i=0;i<a;i++)
        {

            for(int j=0;j<b;j++)
            {
               if(mat2[i][j]!=0)
               {
                   spa2[l][0]=i;
                   spa2[l][1]=j;
                   spa2[l][2]=mat2[i][j];
                   l++;


               }
            }
        }
        printf("first sparse matrix=\n");
        for(int i=0;i<elem1;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d\t",spa1[i][j]);
            }
            printf("\n");
        }
        printf("second sparse matrix=\n");
        printf("row\tcol\tval");
        for(int i=0;i<elem2;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d\t",spa2[i][j]);
            }
            printf("\n");
        }
        printf("sum of sparse matrix=");
        printf("row\tcol\tval\n");
        int mat3[a][b],count=0;
        for(int i=0;i<a;i++)
        {

            for(int j=0;j<b;j++)
            {
                mat3[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(mat3[i][j]!=0)
                {
                    count++;
                }
            }

        }

        int m=0;
        int spa3[count][3];
        for(int i=0;i<a;i++)
        {

            for(int j=0;j<b;j++)
            {
               if(mat3[i][j]!=0)
               {
                   spa3[m][0]=i;
                   spa3[m][1]=j;
                   spa3[m][2]=mat3[i][j];
                   m++;
               }
            }
        }
        printf("row\tcol\tval\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d\t",spa3[i][j]);
            }
            printf("\n");

        }




    }
    else{
        printf("not a sparse matrix");
    }



   return 0;

}