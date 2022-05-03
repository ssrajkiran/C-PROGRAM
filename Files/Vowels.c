#include <stdio.h>
 
int main ()
{
    int length=0,sum_v=0;
   FILE *fp = fopen("file.txt","r");
   if(fp==NULL){
       return 0;
   }

   
       for(char c = fgetc(fp) ; c!=EOF ; c= fgetc(fp)){
           if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'){
               sum_v+=1;
           }
           length+=1;
       }
  
   printf("Length of the text : %d\n",length);
    printf(" Sum of vowels : %d",sum_v);
    
   fclose(fp);
   return 0;
}