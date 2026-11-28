#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"
int wrong_input_number_detector(int n)
{
    if (n<0 || n>5)
    {
        printf("Unsupported number, please enter one of the numbers above: ");
        return 0;
    }
    return 1;
}
void show_student_item (Student *s,int id,int count)
{
    int i;
    for (i=0;i<count; i++)
    {
    if (s[i].ID==id)
    {
        printf("Students full name: %s %s\n",s[i].full_name.name,s[i].full_name.surname);
        printf("Students date of birth: %d.%d.%d\n",s[i].date_of_birth.day,s[i].date_of_birth.month,s[i].date_of_birth.year);
        printf("Students major: %s\n",s[i].major);
        printf("Students class: %d\n",s[i].class);
        printf("Students GPA: %.2lf\n",s[i].GPA);
        break;
    }
   }
   if (i==count)
   {
    printf("No ID is found.");
   }
}
void edit_student_item (Student s)
{

}
void delete_student_item (Student s)
{

}
void add_student (Student s)
{

}
void welcome()
{
    printf("      || **Welcome To The Student Management Portal** || \n\nPlease enter one of the numbers below to access the matching service \n");
    printf("---------------------------------------------------------------------\n");
    printf("*|| For exiting this page-> 0\n");
    printf("*|| For listing students based on filter-> 1\n");
    printf("*|| For editing information about students -> 2\n");
    printf("*|| For deleting information about students -> 3\n");
    printf("*|| For searching information about students -> 4\n");
    printf("*|| For showing the number of enrolled students-> 5\n");
    printf("*|| For sorting students-> 6\n");
    printf("*|| For adding new student-> 7\n");
    printf("Enter number here: ");
}