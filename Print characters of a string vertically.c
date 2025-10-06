#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
   
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Characters vertically:\n");
    for(i = 0; str[i] != '\0'; i++)
        printf("%c\n", str[i]);

    return 0;
}
