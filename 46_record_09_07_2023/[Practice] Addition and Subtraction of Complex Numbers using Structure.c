#include <stdio.h>
struct complex
    {
        int a;
        int b;    
    };
    
int main(void){
    struct complex comp1;
    struct complex comp2;
    scanf("%d",&comp1.a);
    scanf("%d",&comp1.b);
    scanf("%d",&comp2.a);
    scanf("%d",&comp2.b);
    printf("%d+%di\n",comp1.a+comp2.a,comp1.b+comp2.b);
    printf("%d+%di",comp1.a-comp2.a,comp1.b-comp2.b);
    return 0;
}

