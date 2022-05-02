#include<stdio.h>
int main(){
    int n,a[25];
    printf("Enter the value of n :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the %d number :",i);
        scanf("%d",&a[i]);
    }
printf("Reverse of the number in an array :\n");
    for(int i=n-1 ;i>=0;i--){
        printf("%d\n",a[i]);
    }
}
 