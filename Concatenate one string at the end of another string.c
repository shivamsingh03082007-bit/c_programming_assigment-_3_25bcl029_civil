#include <stdio.h>
#include <string.h>

int main() {
    char str1[200]; 
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

   
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }

    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    
    if (len1 + len2 < sizeof(str1)) {
        strcat(str1, str2);
        printf("Concatenated string: %s\n", str1);
    } else {
        printf("Error: concatenated string would exceed buffer size.\n");
    }

    return 0;
}
