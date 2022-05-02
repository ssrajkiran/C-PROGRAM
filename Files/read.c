#include <stdio.h>
 
int main ()
{
   FILE *fp = fopen("file.txt","r");

   if(fp==NULL){
       return 0;
   }

   do{
       char ch = fgetc(fp);
       if(feof(fp))
           break;
        printf("%c",ch);

   }while(1);
   fclose(fp);

   return 0;
}