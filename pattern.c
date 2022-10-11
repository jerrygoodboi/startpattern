#include <stdio.h>
int main()
{
        int i,k,j,n;
        printf("Enter a number :");
        scanf("%d",&k);
        for(n=1;n<=k;n++){
                i=k-n;
                while(i>0){
                printf(" ");
                i--;
                }
for(j=0;j<2*n-1;j++)
        {
printf("*");

        }
printf("\n");
        }}
