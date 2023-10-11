//Let's Start Ajay
#include <stdio.h>
main()
{
    int no1, no2, rp=0;
    printf("PRACTICAL 10 BY AJAY\nWAP to implement goto statement");
    Jumper :
        printf("\nTHIS TEXT IS JUST AFTER GOTO TARGET LABEL\nREPETITION COUNT (DEF=0) : %d", rp);
    printf("\n\nGIVE TWO NUMBER\nIF NO1 < NO2 THEN GOTO WORKS\nUNTIL NO1 = NO2\nENTER NUMBER 1 : ") ;
    scanf("%d", &no1);
    printf("ENTER NUMBER 2 : ") ;
    scanf("%d", &no2);
    if (no1 < no2) 
        {
            rp++ ;
            goto Jumper ;
        } 
    printf("PASSED GOTO, PROGRAM ENDS HERE");
    return 0 ;
}    