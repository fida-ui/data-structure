#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k;
 clrscr();
 printf("enter rows and columns for first matrix");
 scanf("%d%d",&r1,&c1);
 printf("enter rows and columns for second matrix");
 scanf("%d%d",&r2,&c2);
 if(c1!=r2)
{
 printf("matrix multiplication not possible");
}
 printf("enter elements of first matrix\n");
 for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
{
 scanf("%d",&a[i][j]);
}
}
 printf("enter elements of second matrix");
 for(i=0;i<r2;i++)
{
 for(j=0;j<c1;j++)
{
 scanf("%d",&b[i][j]);
}
}
 for(i=0;i<r1;i++)
{
 for(j=0;j<c2;j++)
{
 result[i][j]=0;
 for(k=0;k<c1;k++)
{
 result[i][j]+=a[i][k]*b[k][j];
}
}
}
 printf("resultant matrix\n");
 for(i=0;i<r1;i++)
{
 for(j=0;j<c2;j++)
{
 printf("%d\t",result[i][j]);
}
 printf("\n");
}
 getch();
}

