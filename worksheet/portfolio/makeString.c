
/*
Name: Joel Benjamin
Student ID: 201922915
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100];
    buffer[0] = '\0' ; // initialises an empty string 

    // process the command-line data using appropriate string functions
    
    for (int k=1; k<argc; ++k){ // intitialises the loop from argv[1] to argv[c]
        strcat(buffer,argv[k]); // buffer = argv[k]
        if (k != argc - 1 ){
            strcat(buffer, "-"); // buffer = argv[k] + "-""
        }
    
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}