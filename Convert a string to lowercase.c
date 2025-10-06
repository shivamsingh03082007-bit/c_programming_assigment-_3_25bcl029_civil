#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for(int i = 0; str[i]; i++)
        str[i] = tolower((unsigned char) str[i]);

    printf("Lowercase: %s\n", str);
    return 0;
}
