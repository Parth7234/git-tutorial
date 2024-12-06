#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr,*fp;
    char c,str[100];
    str[0]='a';
    fptr=fopen("a1.txt","r");
    if(fptr==NULL){
        printf("Error in opening file or file doesnot exist");
        exit(1);
    }
    int i,x;
    fp=fopen("copy.txt","w");
     while(!feof(fptr)){
    c=fgetc(fptr);
    printf("%c",c);
    }
    if(fp==NULL){
        printf("Error in file creation");
        exit(1);
    }
    rewind(fptr);
    while(1){
    for(i=0;str[i]!=' '||EOF;i++){ 
        str[i]=fgetc(fptr);
        if(str[i]==EOF)return 0;
    }
    str[i++]='\0';
    fprintf(fp,"%s",str);
    rewind(fp);
    }
    fclose(fptr);
    fclose(fp);
    //git test
}