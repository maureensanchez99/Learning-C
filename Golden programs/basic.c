#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function prototype -- helps the compiler do type checking of arguments and return values
/*void do_something(char a, int b, long c, long long d, float e, double f, unsigned int g, unsigned 
                  long h, unsigned long long i){
    
}*/

void do_something(char a, int b, long c, long long d, float e, double f, unsigned int g, unsigned 
                  long h, unsigned long long i){
    printf("a=%c, b=%d, c=%1d, d=%11d, e=%f, f=%f, g=%u, h=%1u, i=%11u\n");
} 

int main(int argc, char *argv[]){
    int a = 5;
    int i;
    
    do_something('a', -3, 4, 5, 5.6, 4.1415926535, 5, 99, 128);

    // IF
    if(a == 0){
        printf("a=0\n");
    } else if (a == 1){
        printf("a=1\n");
    } else {
        printf("a is neither 0 nor 1.\n");
    }

    /* WHILE. The condtion (in this case, the integer variable 'a')
       can be anything that evaluates to a numeric value. 0 is false, 
       anything else is true. The loop terminates when the condtion
       evaluates to false and is checked BEFORE each loop iteration
    */
   while(a){
        a--;
        printf("a=%d\n, a");
   }
   a = -4;

   /* DO WHILE. The condtion 
   */ 
    return 0;
}