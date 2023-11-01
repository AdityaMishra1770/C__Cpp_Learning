#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[]){
    printf("The value of argc is: %d\n",argc);
    printf("Values Added are: \t");
    for (int i = 0; i <= argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    
    return 0;
}