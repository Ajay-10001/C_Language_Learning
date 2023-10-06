//Let's Start Ajay
#include <stdio.h>
main()
{
    int a, b, c; 
    printf("PRACTICAL 4 BY AJAY\nWAP to find greatest number among given three integers numbers");
    printf("\nENTER 1ST NO. : ") ;
    scanf("%d", &a);
    printf("ENTER 2ND NO. : ");
    scanf("%d", &b);
    printf("ENTER 3RD NO. : ");
    scanf("%d", &c);
    if (a > b && a > c) 
        printf("GREATEST NUMBER IS : %d", a);
    else if (b > a && b > c) 
        printf("GREATEST NUMBER IS : %d", b);  
    else
        printf("GREATEST NUMBER IS : %d", c);
    return 0 ;
}    