#include<stdio.h>
int main(){

    char filename[255];
    int ft;
    int i =0;
    printf("Enter file name : ");
    scanf("%s",&filename);

    FILE *fp =fopen(filename,"r");
    if(fp==NULL){
        printf("File is not found : %s",filename);
        return 0;
    }

    fseek(fp,0,SEEK_END);
    ft=ftell(fp);

    while (i<ft)
    {
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
        i++;
    }
    fclose(fp);
    return 0;
}