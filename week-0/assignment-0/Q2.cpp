/**
 * @file Q2.cpp
 * @author your name (you@domain.com)
 * @brief Question - 2
 * @version 0.1
 * @date 2022-01-04
 * 
 *  
 */
#include <stdio.h>

enum Covid_prevention{
    Sanitizer = 1,
    Wear_mask = 2,
    Soc_distance = 4
};

int main()
{
    int myCovidPrevention = Wear_mask | Soc_distance;
    printf("%d", myCovidPrevention);
    return 0;
}
