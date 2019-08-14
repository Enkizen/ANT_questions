
/* The question created by the Indian Lecturer wants us to create infinite loops 
prompting and printing user input of a non-negative integer + another integer
It felt weird to me to ask and design such a question.
Plus I basically can't understand what he wants in the question.
And he only gave a very small box to write the code in.
Hence, since I forgot the syntax, I din do this question properly.

Up until now, I still don't know what he is asking for. Is he asking for infinite summation to previous sum???
*/

#include <stdio.h>

int main(void) {
    
    while(1){
    int i,j;

    do{
    printf("Enter a non-negative integer: ");
    scanf("%d", &i);
    }while(i<0);

    do{
    printf("Enter the second non-negative integer:");
    scanf("%d", &j);
    }while(j<0);
    

    printf("%d + %d = %d\n", i, j, i+j);
  }

  return 0;
}


