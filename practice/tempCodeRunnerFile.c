#include<stdio.h>
#include<math.h>
void main()
{
    int n=1634;
    int rem=1,n1=n,count=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        count++;
    }
    int sum=0; 
    rem=1,n=n1;
    while(n>0){
        rem=n%10;
        int t=1;
        printf("rem= %d\n",rem);
        printf("count=%d\n",count);
        t=pow(rem,count);
        printf("%d\n",t);
        sum+=t;
        n=n/10;
    }
    if(n1==sum){
        printf("%d is a armstromg number\n",n1);
    }
    else
        printf("%d is not a armstromg number\n",n1);

}