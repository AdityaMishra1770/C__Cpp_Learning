#include"Harry_C.c"
#define Pi 3.1415926 // define used as substituion
#define Circle_Area(r) Pi*r*r
#define Debug
#define pro printf
int main(){
    main2();//#include file included Harry_C content
    int ro = 34;
    printf("Area of radius %d via #defineD area is :%f \n",ro,Circle_Area(ro));
#ifdef Debug 
    printf("debugging\n");
#endif
#undef Debug
#ifdef Debug 
    printf("Undefinedd debug\n");
#else 
    pro("Define works perfectly\n");
#endif
    return 0;
}