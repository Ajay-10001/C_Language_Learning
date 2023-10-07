//Let's Start Ajay
#include <stdio.h>
main()
{
    float mk1, mk2, mk3, mk4, mk5, avg, total;
    printf("PRACTICAL 7 BY AJAY\nWAP to enter the five subject marks and to calculate average, total, grade.(Using if else)");
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
    printf("\nAVERAGE : %f\n", avg);
    if (avg >= 91 && avg <= 100)
        printf("GRADE : A1"); 
    else if (avg >= 81 && avg <= 90)
        printf("GRADE : A2");   
    else if (avg >= 71 && avg <= 80)
        printf("GRADE : B1");    
    else if (avg >= 61 && avg <= 70)
        printf("GRADE : B2");    
    else if (avg >= 51 && avg <= 60)
        printf("GRADE : C1");    
    else if (avg >= 41 && avg <= 50)
        printf("GRADE : C2");   
    else if (avg >= 33 && avg <= 40)
        printf("GRADE : D");  
    else if (avg >= 21 && avg <= 32)
        printf("GRADE : E1");    
    else if (avg >= 0 && avg <= 20)
        printf("GRADE : E2");
    else
        printf("CAN'T ASSIGN GRADE, INPUT FAULT");

    return 0 ;
}