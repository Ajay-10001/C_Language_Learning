//Let's Start Ajay
#include <stdio.h>
main()
{
    float mk1, mk2, mk3, mk4, mk5, avg, total;
    int cavg ;
    printf("PRACTICAL 8 BY AJAY\nWAP to enter the five subject marks and to calculate average, total, grade.(Using switch)");
    printf("\nENTER MARKS OBTAINED IN SUBJECT 1 : ");
    scanf("%f", &mk1);
    printf("ENTER MARKS OBTAINED IN SUBJECT 2 : ");
    scanf("%f", &mk2);
    printf("ENTER MARKS OBTAINED IN SUBJECT 3 : ");
    scanf("%f", &mk3);
    printf("ENTER MARKS OBTAINED IN SUBJECT 4 : ");
    scanf("%f", &mk4);
    printf("ENTER MARKS OBTAINED IN SUBJECT 5 : ");
    scanf("%f", &mk5);
    total = (mk1 + mk2 + mk3 + mk4 + mk5) ;
    printf("\nTOTAL MARKS OBTAINED OUT OF 500 : %f", total);
    avg = total / 5 ;
    cavg = (int) avg/10 ;
    printf("\nAVERAGE : %f\n", avg);
    //printf("\nCAVG : %d\n", cavg); 
    switch (cavg) 
    {
    case 10 :
        printf("GRADE : A1");
        break ;
    case 9 :
        printf("GRADE : A1");
        break ;
    case 8 :
        printf("GRADE : A2");
        break ;   
    case 7 :
        printf("GRADE : B1");  
        break ;  
    case 6 :    
        printf("GRADE : B2");
        break ;    
    case 5 :
        printf("GRADE : C1"); 
        break ;   
    case 4 :
        printf("GRADE : C2"); 
        break ;  
    case 3 :
        printf("GRADE : D"); 
        break ;
    case 2 :
        printf("GRADE : E1"); 
        break ;   
    case 1 :
        printf("GRADE : E2");
        break ;
    default :
        printf("CAN'T ASSIGN GRADE, INPUT FAULT");
    } 
    return 0 ;
}