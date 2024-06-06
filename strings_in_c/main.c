#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[5][10];
   // for(int i=0; i<5; i++){
        // how to read
     //   gets(name[i]);
   // }

    /*
   char str1[20] = "Alaa Omar";
   char str2[15] = " Shafiq Omar";
   printf("Size of str1\n");
   printf("%lu\n", strlen(str1));  // Use %lu for size_t return type of strlen
   // printf("%-10s", str1);  // Uncomment if needed to print with a minimum width of 10 characters

   // Functions on strings

   strcat(str1, str2);
   printf("str1 after concatentation with str2\n"); // str1 must be large enough to hold the concatenated result
   printf("%s\n", str1);
   printf("Size of str1 after concatination\n");
   printf("%lu\n", strlen(str1));

*/

/*
    char src[20] = "Hello, World!";
    char dest[20];

    // Copy the contents of src to dest
    strcpy(dest, src);

    // Print the destination string
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

*/
/*
    char src[20] = "Hello, World!";
    char dest[20];

    // Copy the first 5 characters of src to dest
    strncpy(dest, src, 2);

    // Manually add null terminator at the end of the copied string
    dest[1] = '\0';

    // Print the source and destination strings
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
*/

/*
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";

    // Compare str1 and str2
    int result1 = strcmp(str1, str2);  //hello word -1
    // Compare str1 and str3
    int result3 = strcmp(str1, str3); // hello hello 0

        // Compare str2 and str1
    int result2 = strcmp(str2, str1); // world hello 1

    // Print the results
    printf("Comparing '%s' and '%s': %d\n", str1, str2, result1);

    printf("Comparing '%s' and '%s': %d\n", str1, str3, result3);

    printf("Comparing '%s' and '%s': %d\n", str2, str1, result2);

*/
/*


    char str1[] = "Hello, World!";
    char str2[] = "Hello, C!";
    char str3[] = "Hello, Universe!";

    // Compare the first 5 characters of str1 and str2
    int result1 = strncmp(str1, str2, 5);
    // Compare the first 7 characters of str1 and str3
    int result2 = strncmp(str1, str3, 10);

    // Print the results
    printf("Comparing first 5 characters of '%s' and '%s': %d\n", str1, str2, result1);
    printf("Comparing first 7 characters of '%s' and '%s': %d\n", str1, str3, result2);

*/


    //strlen

    //strtok


    char str[] = "Hello, how are you today?"; // it calculate size
    char delimiters[] = " "; // delimiters are space, comma, and question mark
    char *token;

    // Get the first token

     token = strtok(str, delimiters);
    /*
    printf("%s\n", token);
    token = strtok(NULL, delimiters);
    printf("%s\n", token);
    token = strtok(NULL, delimiters);
    printf("%s\n", token);
    token = strtok(NULL, delimiters);
    printf("%s\n", token);
    */
    // Walk through the other tokens
    int i=1;
    while (token != NULL) {
       // printf("%s\n", token);
        token = strtok(NULL, delimiters);
        strcpy(name[i],token);

        puts(name[i]);
         i++;
    }
    printf("hello");
    for(int i=0; i<5; i++){

        puts(name[i]);
    }

   return 0;
}
