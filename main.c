/*
    This project is about "Student management"
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"

int main(void)
{
    printf("      || **Welcome To The Student Management Portal** || \n\nPlease enter one of the numbers below to access the matching service \n");
    printf("---------------------------------------------------------------------\n");
    printf("*|| For exiting this page-> 0\n");
    printf("*|| For listing students based on filter-> 1\n");
    printf("*|| For editing information about students -> 2\n");
    printf("*|| For deleting information about students -> 3\n");
    printf("*|| For searching information about students -> 4\n");
    printf("*|| For showing the number of enrolled students-> 5\n");
    printf("Enter number here: ");
    int number;
    scanf("%d",&number);
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
                
        }
        else if (number==5)
        {
                
        }
        printf("Enter number here: ");
        scanf("%d",&number);
        while (wrong_input_number_detector(number)==0)
        {
            scanf("%d",&number);
        }
    }
    printf("The service is finished.");
}