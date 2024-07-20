#include<stdio.h>
int main()
{
    int row1;int col1;
    printf("\nenter the number of rows in first matrice = ");
    scanf("%d",&row1);
    printf("\nenter the number of coloumns in first matrice = ");
    scanf("%d",&col1);
    long long int a[row1][col1];
    printf("\nenter the elements of first matrice A = ");
    for(int i=0;i<=row1-1;i++)
    {
        for(int j=0;j<=col1-1;j++)
           scanf("%lld",&(a[i][j]));
    }
    printf("\nfirst matrice look likes A = \n");
    for(int i=0;i<=row1-1;i++)
    {
        for(int j=0;j<=col1-1;j++)
           printf("| %lld |",(a[i][j]));
        printf("\n");
    }
    long long int sumrow=0;
    long long int sumcol=0;
    for(int i=0;i<=row1-1;i++)
    {
        sumrow=0;
        for(int j=0;j<=col1-1;j++)
         sumrow=sumrow+a[i][j];
        printf("\nthe sum of row %d is %lld",i+1,sumrow);
    }
    printf("\n\n");
    for(int i=0;i<=col1-1;i++)
    {
        sumcol=0;
        for(int j=0;j<=row1-1;j++)
         sumcol=sumcol+a[j][i];
        printf("\nthe sum of col %d is %lld",i+1,sumcol);
    }
    return 0;
}