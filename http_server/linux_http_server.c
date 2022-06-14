#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char* argv[]){
    if(argc!=2){
        printf("port<%s> used\n",argv[0]);
        exit(1);
    }
    return 0;
}
