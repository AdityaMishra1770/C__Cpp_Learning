#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // ----- File Operations [note:write or append create file]------
    FILE *point = NULL;
    point = fopen("File.txt", "a+");
    fprintf(point,"%s","Write the content here\n"); //works with a or w mode to write in file
    // char go[30]; // String to scan file.text
    // fscanf(point, "%s", go);
    // printf("%s\n", go);
    // char c = fgetc(point);
    // printf("Enterd character in file is: %c\n", c);
    // c = fgetc(point);
    // printf("Enterd character in file is: %c\n", c);
    // char str[28];
    // fgets(str,280,point);// Taking value via fgets
    // printf("Enterd characters in file is: %s %c%s\n",go,c, str);
    
    fputc('y',point);
    fputs("you is good\n",point);
    fclose(point);
    return 0;
}