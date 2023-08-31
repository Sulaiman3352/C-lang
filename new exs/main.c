#include <stdio.h>    
#include <stdlib.h> 
   
int main()
{    
    char characterName[100]; 
    int characterAge; 

    printf("print your Name:"); 
    fgets(characterName,100, stdin); 

    printf("\nprint your age:");
    scanf("%d", &characterAge);

    printf("\nThere once was a man named %s", characterName);
    printf("he was %d years old.\n",characterAge);   

    fprintf(stdout,"\n");

    return 0;   
}