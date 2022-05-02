
#include <stdio.h>

int main() {
    
   int a[10],n;
   printf("Enter the value of n :");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       printf("Enter the value of %d number :",i);
       scanf("%d",&a[i]);
    
   }
     printf("Ascending order :\n");
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(a[i] < a[j]){
               int tmp=a[i];
               a[i]= a[j];
               a[j]=tmp;
           }
       }
   }
   for(int i=0;i<n;i++){
       printf("The value of %d number is %d\n",i,a[i]);
   }
  
    return 0;
}