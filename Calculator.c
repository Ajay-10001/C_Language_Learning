//Let's Start Ajay
#include <stdio.h>
main()
{
    float no1, no2, ans=0 ;
    char chk ;
    printf("THIS IS A BASIC CALCULATOR");
    printf("\nENTER NO. 1 : ");
    scanf("%f", &no1);
    printf("\nENTER NO. 2 : ");
    scanf("%f", &no2);
    printf("\nCHOOSE ANY ONE OPERATION");
    printf("\nADD      = a\nSUBTRACT = s\nMULTIPLY = m\nDIVIDE   = d\nHere : ") ;
    scanf("%s", &chk);
    if (chk == 'a')
        {ans = no1 + no2 ;} 
    else if (chk == 's')
        {ans = no1 - no2 ;} 
    else if (chk == 'm')
        {ans = no1 * no2 ;} 
    else if (chk == 'd')
        {ans = no1 / no2 ;} 
    else
        printf("Wrong Input");
    printf("Answer is : %f", ans);

    return 0 ;
}