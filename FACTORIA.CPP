#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f;
printf("Enter a value");
scanf("%d",&n);
i=1;
f=1;
while(i<=n)
{
f=f*i;
i=i+1;
}
printf("Factorial of a no is %d",f);
getch();
}