#include <stdio.h>
void main()
{
    //the array names are mentioned ar.. in the begining
    int ar_ebno[5],ar_units[5],ebno,units,ar_fee[5],fee;
    char ar_name[5],name;
    for(int i=0; i<=4; i++)
    {
        printf("please enter the name\n");
        scanf("%s", &name);
        ar_name[i]=name;
        printf("please enter the eb number\n");
        scanf("%d", &ebno);
        ar_ebno[i]=ebno;
        printf("enter the units consumed\n");
        scanf("%d", &units);
        ar_units[i]=units;
        if (units<100 && units>0)
        {
            printf("the cost is free free\n");
            fee=0;
            fee=ar_fee[i];
        }
        else if (units>100 && units<400)
        {
            fee=2.25*units;
            ar_fee[i]=fee;
        }
        else if (units>400 && units<500)
        {
           fee=4*units;
            ar_fee[i]=fee;
        }
        else if (units>500 && units<600)
        {
            fee=6*units;
            ar_fee[i]=fee;
        }
        else if (units>600)
        {
            fee=8*units;
            ar_fee[i]=fee;
        }
        else if (units<0)
        {
            printf("units cant be negative\n");
        }
        else
        {
            printf("invalid input\n");
        }
        
    }
    //printing the consuption of all houses
    for(int j=0; j<=4; j++)
    {
    
    printf("%d %d %d \n",ar_ebno[j],ar_units[j],ar_fee[j]);
    }
    
    
    
}
