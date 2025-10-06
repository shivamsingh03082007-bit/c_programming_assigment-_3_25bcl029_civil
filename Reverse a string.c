#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for(i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);
    return 0;
}
