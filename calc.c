#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
    char * operation;
    operation = argv[2];
    int a = atoi(argv[1]), b= atoi(argv[3]);
    printf("%s %d %d\n",operation,a,b);
    if (argc >2)
    {
        if (strcmp(operation,"add") == 0)
        {
            printf("Working\t");
            printf("%d",a+b);
        }else if (strcmp(operation,"sub") == 0)
        {
            printf("%d",a-b);
        }else if (strcmp(operation,"multiply") == 0)
        {
            printf("%d",a*b);
        }else if (strcmp(operation,"divide") == 0)
        {
            printf("%f",a/b);
        }else
        {
            printf("Wrong Input");
        }
        
        
        
    }
    
    return 0;
}