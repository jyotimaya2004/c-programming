#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(i==j||i+j==a+1){
            printf("* ");}
            else
            printf("  ");
        
       // printf("* ");
         }
        printf("\n");
    }
}