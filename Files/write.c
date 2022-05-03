#include<stdio.h>
int main(){
    char filename[15],text[128];
    printf("Enter the file name : ");
    scanf("%s",&filename);

    FILE *fp=fopen(filename,"a");
    if(fp==NULL){
        printf("File doesnt exits. ");
        return 0;
    }

    printf("Enter the text to input :");
    scanf("%[^.]",&text);
  
    printf("Content is : %s\n",text);

    if(fprintf(fp,text)){
        printf("Written successful.");
    }else{
        printf("Not successfull");
    }

    fclose(fp);
    return 0;

}