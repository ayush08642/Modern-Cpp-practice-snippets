/**
 * @file Q1.cpp
 * @author Ayush Sharma (you@domain.com)
 * @brief Question - 1
 * @version 0.1
 * @date 2022-01-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * Consider the code snippet given below:
 */
#include <stdio.h>

int main()
{
    typedef double num[3];
    num array[5] = {1, 2, 3, 4, 5, 6}; // LINE-1
    printf("d=%d ", sizeof(double));
    printf("arr=%u ", sizeof(array));
    printf("farr= %.2f ", array[1][1]);
    printf("\n");
    return 0;
}
