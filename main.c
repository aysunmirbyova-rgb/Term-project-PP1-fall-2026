/*
    This project is about "Student management"
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"

int main(void)
{
    welcome();
    int number;
    scanf("%d",&number);
    Student ADA[1000]=
    {
        {{"Aysun Amirbayova"},{26,6,2007},27014, 3.07, "Computer engineering", 2029},
        {{"Ali Aliyev"},{23,11,2008},28074, 3.47, "Information technologies", 2030},

    };
    int count_of_students=2;
    while (wrong_input_number_detector(number)==0)
    {
        scanf("%d",&number);
    }
    while (number!=0)
    {
        if (number==1)
        {
            
        }
        else if (number==2)
        {

        }
        else if (number==3)
        {
                
        }
        else if (number==4)
        {
            int wanted_id;
            printf("Enter ID of the student(press 0 to exit): ");
            scanf("%d",&wanted_id);
            while (wanted_id!=0)
            {
                show_student_item (ADA,wanted_id,count_of_students);
                printf("Enter ID of the student(press 0 to exit): ");
                scanf("%d",&wanted_id);
            }
            
        }
        else if (number==5)
        {
            printf("%d",count_of_students);
        }
        else if (number==6)
        {

        }
        else if (number==7)
        {

        }
        printf("Enter number here: ");
        scanf("%d",&number);
        while (wrong_input_number_detector(number)==0)
        {
            scanf("%d students are enrolled\n",&number);
        }
    }
    printf("The service is finished.");
}