#include <stdio.h>
#include <stdlib.h>

int main()
{
int m; //size of array
printf("Input n>3 & m>4 \n");
scanf("%d" ,&m);//enter number of lines
if (m <=3 )
{return 0;}
int n;
scanf("%d" ,&n);//enter number of columns
if (n <=4)
{return 0;}
int a[m][n];
int i;
int j;
a[m][n] =rand();
for(i = 0; i < m ; i++)//Enter the array
{
for(j = 0 ; j < n ;j++)
{printf("%d \n" ,& a[i][j]);}
}

return 0;
}
