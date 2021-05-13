#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{

    int a,b,dummy;
    char c;
    int sum= 0,s= 0;


    do{
    printf("Enter the starting number:");
    scanf("%d",&a);

    printf("Enter the ending number:");
    scanf("%d",&b);

   
    if (a<=b){
         printf("The number generated in forward order : \n");
        while(a<=b)
            {
                printf("The numbers are: ");
                printf("%d\n",a);
                sum = sum +1;
                a++;
        
            }
        printf("Generated number : %d \n",sum);
    }
    else {
        printf("The number generated in reverse order : \n");
        while(a>=b)
        {
            printf("The number are :");
            printf("%d \n",a);
            s = s+1;
            a--;
            
        }
        printf("Generated number : %d \n",s);

    }
        printf("Do you want to repeat? :(y/n)");
        scanf("%d", &dummy);
        scanf("%c",&c);

    
    }while (c=='y');
    
}
    
    
   

