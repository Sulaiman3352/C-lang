#include <stdio.h>    
#include <stdlib.h> 


void hello(char name[]){

    printf("Hello %s", name);

}

double cube(double num){
    return num * num * num;
}


int main()
{
    hello("hassen");
    printf("\nAnswer: %f", cube(4.0));

    return 0;
}



