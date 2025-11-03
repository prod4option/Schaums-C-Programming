#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int count=0;
    float xl, oldx, mid, error;
    oldx= mid= error = 0.0;
    printf("Enter the x : \n");
    scanf("%f", &xl);
    do
    {
        
        //printf("Interation %d and x is :%f \n", count, xl);

        count++;
        oldx=xl;
        mid =10.-3.*xl*xl;
        if (mid<0) mid = abs(mid);
        xl= pow(mid, .2);
        error =(oldx - xl);
        error =abs(error);
        printf("Interation %d and x is :%f \n", count, xl);

    }
    while(error > 0.001|| count<50);

    printf("Final value of x is %f ", xl);


    return 0;
}
