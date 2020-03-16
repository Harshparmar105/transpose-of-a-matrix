#include<stdio.h>
int main()
{int n;
printf("Enter your matrix order :");
scanf("%d",&n);
int a[n][n];
int i,j;
for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
       {
        scanf("%d",&a[i][j]);
       }
   }
printf("Your Matrix Is :\n");
for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
       {
        printf("%d  ",a[i][j]);
       }
    printf("\n");
   }
printf("Transpose of a matrix is :\n");
for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
       {
        printf("%d  ",a[j][i]);
       }
    printf("\n");
   }
}
