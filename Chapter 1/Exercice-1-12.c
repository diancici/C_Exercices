#include <stdio.h>

#define IN  1
#define OUT 0

int main(int argc, const char * argv[]) {
    // Exercice 1-12. Write a program that prints its input one word per line
   int c, state;
   state = OUT;

   while ((c=getchar()) != EOF){

       if (c == ' ' || c == '\t' || c == '\n'){
           state = OUT;
           continue;}
       else if (state == OUT){
           putchar('\n');
           state = IN;}
       if (state == IN){
           putchar(c);
       }
   }
   return 0
}
