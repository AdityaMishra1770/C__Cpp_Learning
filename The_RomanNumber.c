# include <stdio.h>
int main()
{
    int n, a[]={1,4,5,9,10,40,50,90,100,400,500,900,1000,4000};
    char *b[25]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M","bogus"};
    printf("Initialization\n");
    for(int y=0;y<13;y++)
    {
        printf("%s  %d\n",b[y],a[y]);
    }
    printf("Enter a no.");scanf("%d",&n);
    if(n==0 || n>=4000)
    {
        printf("Invalid value");
    }
    else
    {
        printf("\nRoman value of no. %d is",n);
        while(n>0){
            int k;
            if(n>0 && n<=3999)
            {
                int i=0;
                while(a[i]<=n)
                {
                    k=i;++i; 
                }
            }
            printf("%s",b[k]);
            n=n-a[k];
        }
    }
}