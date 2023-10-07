//Let's Start Ajay
#include <stdio.h>
main()
{
    float no1, no2 ;
    char chk ;
    printf("PRACTICAL 6 BY AJAY\nWAP to implement Mathematical Calculator using switch");
    printf("\nENTER 1ST NUMBER : ") ;
    scanf("%f", &no1);
    printf("ENTER 2ND NUMBER : ") ;
    scanf("%f", &no2);
    printf("CHOOSE THE OPERATION") ;
    printf("\na = ADD\ns = SUBTRACT\nm = MULTIPLY\nd = DIVIDE") ;
    printf("\nYOUR CHOICE : ") ;
    scanf("%s", &chk);
    switch (chk) 
    {
        case 'a' :
            printf("SUM = %f", no1+no2);
            break ;
        case 's' :
            printf("DIFFERENCE = %f", no1-no2);    
            break ;
        case 'm' :
            printf("PRODUCT = %f", no1 * no2);  
            break ;
        case 'd' :
            printf("QUOTIENT = %f", no1 / no2); 
            break ;
        default :
            printf("WRONG INPUT AS OPERATOR"); 
            break ;
    }
    return 0 ;
}    