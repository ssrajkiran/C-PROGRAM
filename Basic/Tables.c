#include<stdio.h>
int main()
{
    int n,t;
    printf("Enter table number");
    scanf("%d",&n);
    printf("Enter no of times");
    scanf("%d",&t);

    for(int i =1;i<=t;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}