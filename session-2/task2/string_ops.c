
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests
    printf("As array: %s\n", str1);
    printf("As array: %s\n", str2);
    printf("As array: %s\n", str3);
    // use 'strcmp' to compare 2 strings - print the return value
    strcmp(str1,str2);
    int result = strcmp(str1,str2);
    printf("return value %d\n ", result);
    // use 'strcat' to concatenate 2 strings - print the resulting string
    strcat(str1,str2);
    printf("new string: %s\n", str1);
    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3,str1);
    printf("copied string: %s \n", str3);

    return 0;
}
