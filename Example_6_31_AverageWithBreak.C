/*

EXAMPLE 6.31 Averaging a List of Nonnegative Numbers In Example 6.17 we saw a complete C program that
uses a f o r loop to calculate the average of a list of n numbers. Let us now modify this program so that it processes only
nonnegative numbers.
The earlier program requires two minor changes to accommodate this modification. First, the f o r loop must include
an i f statement to determine whether or not each new value of x is nonnegative. A continue statement will be included
in the i f Statement to bypass the processing of negative values of x. Secondly, we require a special counter (navg) to
determine how many nonnegative numbers have been processed. This counter will appear in the denominator when the
average is calculated (i.e., the average will be determined as average = sumlnavg).
Here is the actual C program. It is interesting to compare it with the program shown in Example 6.17.
 calculate the average of the nonnegative numbers i n a l i s t of n numbers 



*/
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int numbercount, tag, count;
    float number, sum, average;
    
    printf("Enter the number of numbers in the list :\n");
    scanf("%d", &numbercount);
    
    for(count=0, tag=0, sum =0.0; count<numbercount;count++)
    {
        printf("\nEnter the %d / %d  number in the list:", count+1, numbercount);
        scanf("%f", &number);
        if(number<0) continue;
        sum+=number;
        tag++;
    }
    printf("The sum is %.2f and average = %.2f \n", sum, sum/tag);
    
    return 0;
}
