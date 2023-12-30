#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char *replaceWord(char *str, const char *oldWord, const char *newWord)
{
    char *returnStr;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i += oldWordLength - 1;
        }
    }
    returnStr = (char *)malloc(i + count * (newWordLength - oldWordLength + 1));
    int j = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&returnStr[j], newWord);
            j += newWordLength;
            str += oldWordLength;
        }
        else
        {
            returnStr[j] = *str;
            j++;
            str++;
        }
    }
    returnStr[j] = '\0';
    return returnStr;
}
int main2(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("bill.txt", "r+");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill tempelate was : \n\n%s\n\n", str);
    char *returnStr = replaceWord(str, "item", "Hell-Bat Armour");
    returnStr = replaceWord(returnStr, "name", "Bruce Wayne");
    printf("Now the new bill tempelate is : \n\n%s\n\n", returnStr);
    fclose(ptr);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
void greetHello(int (*func)(int, int))
{
    printf("\n\nHello User\n");
    printf("\nEnter two numbers : ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\nsum of %d and %d is : %d\n", a, b, func(a, b));
}

float Area_of_circle(int x1, int x2, int y1, int y2)
{
    float a = (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))) * (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    return 3.1415 * a;
}

int main()
{
    printf("Sum of 4 and 5 is : %d\n", sum(4, 5));
    int (*funcPoint)(int, int); /// always put () after int as == int(*poimter) else it will assume it as function without braces
    funcPoint = sum;
    int d = funcPoint(6, 8);
    printf("Sum of 6 and 8 is : %d ", d);
    greetHello(funcPoint);
    printf("\n\nArea of circle is : %f", Area_of_circle(0, 5, 0, 5));
    return 0;
}
