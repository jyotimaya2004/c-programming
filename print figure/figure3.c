#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<=a-i;j++){
        
        printf("* ");
         }
        printf("\n");
    }
}