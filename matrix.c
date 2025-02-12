#include<stdio.h>
#include<conio.h>
void main()
{
 int m,n,c,d,first[10][10],second[10][10],diff[10][10],sum[10][10];
 clrscr();
 printf("enter the number of rows and columns of first matrix");
 scanf("%d%d",&m,&n);
 printf("enter %d elements of first matrix\n",m*n);
 for(c=0;c<m;c++)
 for(d=0;d<n;d++)
 scanf("%d",& first[c][d]);
 printf("enter the %d elements of second matrix\n",m*n);
 for(c=0;c<m;c++)
 for(d=0;d<n;d++)
 scanf("%d",& second[c][d]);
 printf("\n the first matrix is\n");
 for(c=0;c<m;c++)
{
 for(d=0;d<n;d++)
{
 printf("%d\t",first[c][d]);
}
 printf("\n");
}
 printf("the second matrix is \n");
 for(c=0;c<m;c++)
{
 for(d=0;d<n;d++)
{
 printf("%d\t",second[c][d]);
}
 printf("\n");
}
 for(c=0;c<m;c++)
{
 for(d=0;d<n;d++)
{
 diff[c][d]=first[c][d]-second[c][d];
}
}
 printf("the difference of two entered matrix is\n");

 for(c=0;c<m;c++)
{
 for(d=0;d<n;d++)
{
 printf("%d\t",diff[c][d]);
}
 printf("\n");
}
 for(c=0;c<m;c++)
{
 for(d=0;d<n;d++)
{
 sum[c][d]=first[c][d]+second[c][d];
}
}
 printf("the sum of two matrix is\n");
 for(c=0;c<m;c++)
{
 for(d=0;d<n;d++)
{
 printf("%d\t",sum[c][d]);
}
 printf("\n");
}
 getch();
}
