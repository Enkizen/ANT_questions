#include <stdio.h>

int main()
{
    /*Part 1 questions check the output of the following*/
    
    /* 7/9*9 */
    printf("7/9*9 in signed decimal number is %d\n", 7/9*9); //0
    printf("7/9*9 in double is %f\n", 7/9*9); //0.000000
    
    /* The reason is 7/9 will become 0 since there is not float type cast explicitly */
    
    /*  3<<6 
    * x<<y . *This guy I really completely forgotten*
    *This is the left and right shift operator.
    
    *<< (left shift) Takes two numbers, left shifts the bits of the first operand, 
    *the second operand decides the number of places to shift. 
    *Or in other words left shifting an integer “x” with an integer “y” 
    *(x<<y) is equivalent to multiplying x with 2^y (2 raise to power y).
    
    *The left shift and right shift operators should not be used for negative numbers. 
    *The result of is undefined behaviour if any of the operands is a negative number. 
    *For example results of both -1 << 1 and 1 << -1 is undefined.
    *If the number is shifted more than the size of integer, the behaviour is undefined. 

    *For example, 1 << 33 is undefined if integers are stored using 32 bits. See this for more details.
    *The left-shift by 1 and right-shift by 1 are equivalent to multiplication and division by 2 respectively. 
    *As mentioned in point 1, it works only if numbers are positive.
    */
    
    // a = 3 is 0000 0011, b = 6 is 0000 0110
    unsigned char a = 3, b = 6;  
  
    // The result is 192
    printf("a<<b = %d\n", a<<b); 
    
    printf("a<<b without declaration = %d\n", 3<<6); //also 192
    
    /*  192 is 0b 1100 0000 because 11 shifted 6 places to the left*/
    
    /* 3 == 6 */
    printf("3 == 6 = %d\n", 3 == 6); //0 if the output is in signed decimal
    
    //printf("3 == 6 = %b\n", 3 == 6); //this %b boolean format specifier doesnt exist in c
    
    /* 3 < 6 */
    printf("3 < 6 = %d\n", 3 < 6); //1 if the output is in signed decimal
    
    
    /* Do consider donating to me when you get the job. 
     *  https://tradegrowtopia-1330.firebaseapp.com/editedeyozaft.html */
    return 0;
}
