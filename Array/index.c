
#include <stdio.h>

int main() {
  
   int a[10],n,sum=0;
   printf("Enter the value of n :\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       printf("Enter the value of %d number :\n",i);
       scanf("%d",&a[i]);
    
   }
   printf("Displaying the array :\n");
   for(int i=0;i<n;i++){
       printf("The value of %d number is %d\n",i,a[i]);
   }

   printf("Index Finding :\n");
   int num;
   printf("Enter the number want to find :\n");
   scanf("%d",&num);
   
   for(int i=0;i<n;i++){
       if(num == a[i]){
           printf("The index value of number %d is %d\n",num,i);
           sum=sum+1;
       }
       }
     if (sum ==0){
        printf("You entered number is not available in array.\n");
     
    }
  
    return 0;
   }
           
   
