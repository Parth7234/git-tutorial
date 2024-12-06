#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    char *p;
    int F[41],i,j;
    F[0]=0;
    F[1]=1;
    for(i=2;i<=40;i++){
        F[i]=F[i-1]+F[i-2];
    }
    fptr= fopen("file.txt","w");
    if(fptr==NULL){
        printf("Error in file creation");
    }
    for(i=0;i<41;i++){
        p=(char*)(F+i);
        for(j=0;j<4;j++){
            fprintf(fptr,"%c",*p);
            p++;
        }
    }
    fclose(fptr);
    //git test


}