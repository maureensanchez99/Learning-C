#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function prototype -- helps the compiler do type checking of arguments and return values
void do_something(char a, int b, long c, long long d, float e, double f, unsigned int g, unsigned 
                  long h, unsigned long long i){
    
}

void do_something(char a, int b, long c, long long d, float e, double f, unsigned int g, unsigned 
                  long h, unsigned long long i){
    printf("a=%c, b=%d, c=%1d, d=%11d, e=%f, f=%f, g=%u, h=%1u, i=%11u\n");
} 

int main(int argc, char *argv[]){
    int a = 5;
    int i;
    
    return 0;
}