#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    
     /* How many bytes of memory need to store ASCII string "My Word" 
     
     It depends what is the character and what encoding it is in: 
     An ASCII character in 8-bit ASCII encoding is 8 bits (1 byte), though it can fit in 7 bits, 
     representing 128 different characters
     An ISO-8895-1 character in ISO-8859-1 encoding is 8 bits (1 byte). 
     A Unicode character in UTF-8 encoding is between 8 bits (1 byte) and 32 bits (4 bytes).
     
     Ans: 7 bytes since 7 char inclusive of space
     the Indian lecturer who created the assessment only test on Intro to C.
     
     Actual answer: 7bytes + 1byte = 8 bytes for NULL aka \0 or 0x00 depedning on encode version
     
     Null-terminated strings require that the encoding does not use a zero byte (0x00) anywhere, 
     therefore it is not possible to store every possible ASCII or UTF-8 string.[5][6][7] 
     
     However, it is common to store the subset of ASCII or UTF-8 – every character except the NUL character – in null-terminated strings. 
     Some systems use "modified UTF-8" which encodes the NUL character as two non-zero bytes (0xC0, 0x80) and thus allow all possible strings to be stored. 
     This is not allowed by the UTF-8 standard as it is a security risk. A 0xC0, 0x80 NUL might be seen as a string terminator in security validation and as a character when used. Some other byte may be used as end of string instead, like 0xFE or 0xFF, which are not used in UTF-8.

        UTF-16 uses 2-byte integers and as either byte may be zero (and in fact every other byte is, when representing ASCII text), 
        cannot be stored in a null-terminated byte string. 
        However, some languages implement a string of 16-bit UTF-16 characters, terminated by a 16-bit NUL character. 
        (Again the NUL character, which encodes as a single zero code unit, is the only character that cannot be stored. UTF-16 does not have any alternative encoding of zero).
     
     Other languages will getBytes() to check this
     */
    
    /*But lets use what we have to count the bytes */
    char word[]="My Word";
    int z =0;
    while(word[z] !='\0')
    {
        printf("Address of %c: %p\n", word[z], &word[z]);
        z++;
    }

    /*  Output 
        Address of M: 0x 7ffd e960 e194
        Address of y: 0x7ffde960e195   === The address is 0111 1111 1111 1101 1110 1001 0110 0000 1110 0001 1001 0101 12 bits
        Address of  : 0x7ffde960e196
        Address of W: 0x7ffde960e197
        Address of o: 0x7ffde960e198
        Address of r: 0x7ffde960e199
        Address of d: 0x7ffde960e19a
        
        This result confirms the 7 byte +1 byte for 7 char.
    */
    
    /* Maximum number that can be stored in unsigned decimal 
    ffff ffff == 16^8 -1 == 4 294 967 295 since from 0 to 2^32 -1
    
    Unsigned binary numbers are, by definition, positive numbers and thus do not require an arithmetic sign. 
    An m-bit unsigned number represents all numbers in the range 0 to 2^m − 1. 
    For example, the range of 8-bit unsigned binary numbers is from 0 to 25510 in decimal and from 00 to FF16 in hexadecimal. 
    Similarly, the range of 16-bit unsigned binary numbers is from 0 to 65,53510 in decimal and from 0000 to FFFF16 in hexadecimal.

    Signed numbers, on the other hand, require an arithmetic sign. 
    The most significant bit of a binary number is used to represent the sign bit. 
    If the sign bit is equal to zero, the signed binary number is positive; otherwise, it is negative. 
    The remaining bits represent the actual number. There are three ways to represent negative numbers.
    
    2^31 − 1  == 2,147,483,647 for signed Basically 7FFF FFFF in hexadecimal
    Let's test this then*/
    unsigned int a = -1u;  //prevent compiler warning
    printf("To check overflow: %u\n", a);  //To check overflow: 4294967295
    
    a = 4294967296u; //prevent compiler warning
    printf("Max unsigned int %u\n", a);   //Max unsigned int 0. Overflowed.
    
    int b = 2147483647;  //now checking for signed int
    printf("To check overflow: %d\n", b);  //To check overflow: 2147483647
    b++;
    printf("To check overflow: %d\n", b);  //To check overflow: -2147483648
    
    
    // 2,122,233 will not compile. One of the questions.
    /* abs. I mixed up with math.floor*/
    double m = abs(-12.5);
    printf("Absolute of m is %f", m); //12.000000
    
    int m = abs(-12.5);
    printf("Absolute of m is %d", m);  //12   if want to work like math use fabs instead.
    
    /*File Permission and other Linux commands like pwr etc
    644 means that files are readable and writeable by the owner of the file 
    and readable by users in the group owner of that file and readable by everyone else.
    
    .htaccess file is not sensitive for privacy matters. In regards to Directory Protection with htpasswd files in the .htaccess file, 
    by default cPanel places these htpasswd files outside the DocumentRoot, 
    meaning that only other accounts on the same server would conceivably have read access to these files. 
    The information stored in these files is encrypted and not easily broken unless you are using a weak password, 
    in which case this begs the question of why the user was using such a weak password?

    Ultimately if security is a paramount issue for you, then each account needs to be on its own dedicated server. 
    The reason shared hosting is inexpensive when compared to dedicated hosting is because certain sacrifices have to be made. 
    It is just not possible to have a completely secure system (with anything, not just webhosting) in a shared environment.
    
    */
    
    
    /* What is the default filesystem for Windows?
       Ans: NTFS NT File System
       
       What is the default filesystem for MacOS? 
       Ans: HFS+ Herarchical File System 
       
       What is the native filesystem to Linux? 
       Ans: EXT 2, 3 and 4 
     */  
       

    return 0;
}
