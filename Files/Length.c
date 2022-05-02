#include <stdio.h>
 
int main ()
{
    int sum =0;
   FILE *fp = fopen("file.txt","r");

   if(fp==NULL){
       return 0;
   }
   
   for(char c = getc(fp); c!=EOF ; c=getc(fp)){
       sum = sum+1;
   }
   printf("%d",sum);
   fclose(fp);

   return 0;
}