#include<stdio.h>
#include<stdlib.h>
int main(){
    int F[41],i,j;
    FILE *fptr;
    char *p;
    fptr=fopen("file.txt","rb");
    if(fptr==NULL){
        printf("Error in opening file");
        exit(1);
    }
    for(i=0;i<41;i++){
        p=(char*)(F+i);
        for(j=0;j<4;j++){
            fscanf(fptr,"%c",p);
            p++;
        }

    }
    for(i=0;i<41;i++){
        printf("%d\n",F[i]);
    }
    fclose(fptr);
    //git check if ignore file goes to next version or not
    //gitHUB check
    //github check 2
}