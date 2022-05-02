#include<stdio.h>
int main(){
    int a[10],b[10],n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Getting input from the user :\n");
    for(int i=0;i<n;i++){
        printf("Enter value of %d number :\n",i);
        scanf("%d",&a[i]);
    }

    printf("Printing the elements in b :\n");
    for(int i=0;i<n;i++){
        b[i]= a[i];
    }
    for(int i=0;i<n;i++){
        printf("The values in %d is %d\n",i,b[i]);
    }
}