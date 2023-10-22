#include"Harry_C.c"
#define Pi 3.1415926 // define used as substituion
#define Circle_Area(r) Pi*r*r
#define Debug
#define pro printf
int main(){
    main2();//#include file included Harry_C content
    int ro = 34;
    printf("Area of radius %d via #defined area is :%f \n",ro,Circle_Area(ro));
#ifdef Debug 
    printf("debugging\n");
#endif
#undef Debug
#ifndef Debug 
    printf("Undefined debug\n");
#else 
    pro("Define works perfectly\n");
#endif

// ++++++++++++++++ Used Predifned Macros------------------- 
#if True == 1
printf("The current file is %s running on date %s at time %s on line %f return %d and STDC as %d",__FILE__,__DATE__,__TIME__,__LINE__,__STDC_VERSION__,__STDC__);
#endif
    return 0;
}