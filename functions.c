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