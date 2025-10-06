#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    for(int i = 0; str[i]; i++) {
        if(islower((unsigned char) str[i]))
            str[i] = toupper((unsigned char) str[i]);
        else if(isupper((unsigned char) str[i]))
            str[i] = tolower((unsigned char) str[i]);
    }

    printf("Toggle case: %s\n", str);
    return 0;
}
