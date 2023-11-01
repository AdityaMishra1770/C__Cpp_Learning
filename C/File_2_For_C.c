#include "Harry_C.c"
// #define Pi 3.1415926 // define used as substituion
// #define Circle_Area(r) Pi*r*r
// #define Debug
// #define pro printf
int main(){
//     //main2();//#include file included Harry_C content
//     int rio = 34;
//     printf("Area of radius %d via #defined area is :%f \n",rio,Circle_Area(rio));
// #ifdef Debug
//     printf("debugging\n");
// #endif
// #undef Debug
// #ifndef Debug
//     printf("Undefined debug\n");
// #else
//     pro("Define works perfectly\n");
// #endif

// // ++++++++++++++++ Used Predifned Macros-------------------

// printf("The current file is %s running on date %s at time %s on line %d return %d and STDC as %d\n",__FILE__,__DATE__,__TIME__,__LINE__,__STDC_VERSION__,__STDC__);

// // ==========++++++++++++++ Matrix Multiplication-------
// int mat_1[3][3], mat_2[3][3], stored[3][3];
// printf("\n");
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         printf("Enter element at %d row and %d column for mat_1 and mat_2 :\n", i + 1, j + 1);
//         scanf("%d %d", &mat_1[i][j], &mat_2[i][j]);
//     }
//     printf("\n");
// }printf("First matrix\n");
// for (int i = 0; i < 3; i++)
// {
//     printf("[");
//     for (int j = 0; j < 3; j++)
//     {
//         printf(" %d ", mat_1[i][j]);
//     }
//     printf("]\n");
// }printf("\nSecond matrix\n");
// for (int i = 0; i < 3; i++)
// {
//     printf("[");
//     for (int j = 0; j < 3; j++)
//     {
//         printf(" %d ", mat_2[i][j]);
//     }
//     printf("]\n");
// }
// printf("\n");
// for (int io = 0; io < 3; io++)
// {
//     for (int it = 0; it < 3; it++)
//     {
//         stored[io][it]=0;
//         for (int ir = 0; ir < 3; ir++)
//         {
//             stored[io][it] += mat_1[io][ir]*mat_2[ir][it];

//         }
//         printf(" %d ",stored[io][it]);
//     }printf("\n");
    
// }
// printf("\n");

    int u;
    printf("Enter no. to check palindrome\n");
    scanf("%d", &u);
    int ro = reverse(u);
    printf("Entered no. is %d reversed no. is %d", u, ro);
    printf("\n");
    if (u == ro)
    {
        printf("%d is Palindrome Number",u);
    }else
    {
        printf("%d is not Palindrome Number",u);
    }
    
    


return 0;
}