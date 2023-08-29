#include <stdio.h>    
#include <stdlib.h> 
   
int main()
{    
    char characterName[100]; 
    int characterAge; 

    printf("print your Name:"); 
    scanf("%s", characterName); 

    printf("\nprint your age:");
    scanf("%d", &characterAge);

    printf("\nThere once was a man named %s\n", characterName);
    printf("he was %d years old.\n",characterAge);   

    fprintf(stdout,"\n");

    return 0;   
}