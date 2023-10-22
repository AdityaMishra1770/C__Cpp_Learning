#include <stdio.h>
#include <stdlib.h> //Used for Dynamic Memory allocation
#include <conio.h>

// --------------------------------Storage Class----------------------
int local = 0; 
int ao = 4;
int *maly()
{
    extern int ao;
    printf("Extern varible ao= %d\n", ao);
    static int c = 5;
    printf("Static variable c=%d\n", c);
    c++;
    register int ai = 4578;
    printf("Register variable ai=%d\n", ai);
    extern int local ;
    return &local;
}

int main2()
{
    // -------------------------------Dynamic Storage Class-----------------------?
    //     int *ptr;  // ptr is a wild pointer as it is not null neither pointing to any address
    //     int a ;
    //     scanf("%d",&a);
    //     ptr = (int *)malloc(a*sizeof(int));
    //     for (int i = 0; i < a; i++)
    //     {
    //         scanf("%d",&ptr[i]);
    //     }printf("\n");
    //     for (int i = 0; i < a; i++)
    //     {
    //         printf("%d\n",ptr[i]);
    //     }

    //     printf("\nMalloc passed\n");

    //     int *ptr_c;
    //     int b ;
    //     scanf("%d",&b);
    //     ptr_c = (int *)calloc(b,sizeof(int));
    //     for (int i = 0; i < b; i++)
    //     {
    //         scanf("%d",&ptr_c[i]);
    //     }printf("\n");
    //     for (int i = 0; i < b; i++)
    //     {
    //         printf("%d\n",ptr_c[i]);
    //     }

    //     printf("\nCalloc passed\n");
    // //  -------------------------------Realloc_____________
    //     printf("Enter new Size of Malloc Array: ");
    //     int e;
    //     scanf("%d",&e);
    //     ptr=(int*)realloc(ptr,e*sizeof(int));
    //     if(ptr==NULL)
    //     {
    //         printf("Memory not allocated \n");
    //         }
    //         else
    //         {
    //             for (int i = 0; i < e; i++)
    //         {
    //             scanf("%d",&ptr[i]);
    //         }printf("\n");
    //         for (int i = 0; i < e; i++)
    //         {
    //             printf("%d\n",ptr[i]);
    //         }
    //             printf("Memory successfully reallocated \n");
    //             }
    //             // ----------------------------Free ___________________
    //             free(ptr);
    //             printf("Memory freed %d & %d\n",&ptr,ptr);

    // // -------------------------------Storage Classes---------------------
    //     maly();maly();maly();maly();

    // ==========================   Void Pointer------------------------
    int ptr_a = 345;
    float b_pr = 4.65;
    void *ptr_1;
    ptr_1 = &ptr_a;
    printf("Value of ptr_a is %d\n", *(int *)ptr_1);
    ptr_1 = &b_pr;
    printf("Value of b_pr is %f\n", *(float *)ptr_1);

    // void pointer returned in malloc() and calloc() so at starting we use {(int *) or (char *)} to return type_casted data

    ///// ---------------------- Null pointer
    void *ptr_2 = NULL;
    int au = 45;
    ptr_2 = &au;
    printf("Checking pointer au : %d\n", *((int *)ptr_2));
    // Null is a macro value

    // _________________________Dangling Pointer______________
    // ___________________##3 Ways for dangling pointer
    // Case :1)---------------Deallocation of data at that address

    int *ptr_3 = (int *)malloc(3 * sizeof(char));
    ptr_3[0] = 23;
    ptr_3[1] = 34;
    ptr_3[2] = 334;
    printf("Current values of ptr_3 is %d %d %d %d %d\n", *ptr_3, ptr_3, ptr_3[0], ptr_3[1], ptr_3[2]);
    free(ptr_3); // Now the ptr_3 has become danglinfg pointer
    printf("Now ptr_3 Dangling pointer %p %p\n", *ptr_3, ptr_3);

    //--------------Case 2: The scope variable is till the function
    // Eg ; mally();
    int *ptr_4 = maly(); // ptr_4 has become dangling
    // printf("Now ptr_4 Dangling pointer %p %p\n",*ptr_4,ptr_4);
    // Use of above printf_ptr_4 breaks the further code

    // ----Case:3 When function exceeds from scope----------
    int *scope_ptr;
    {
        int ea = 546;
        scope_ptr = &ea;
    }
    // the scope_ptr has become dangling as going out of scope
    printf("Now scope_ptr Dangling pointer %p %p\n", *scope_ptr, scope_ptr);
    
    return 0;
}
