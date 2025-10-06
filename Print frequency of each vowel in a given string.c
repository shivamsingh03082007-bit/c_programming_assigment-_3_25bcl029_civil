#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int j = 0;
    while (str[j] != '\0') {
        if (str[j] == '\n') {
            str[j] = '\0';
            break;
        }
        j++;
    }

    for (int k = 0; str[k] != '\0'; k++) {
        char ch = tolower(str[k]);
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }

    printf("Vowel frequencies:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}
