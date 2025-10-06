#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];
    printf("Enter source string: ");
    fgets(source, sizeof(source), stdin);

  
    size_t len = strlen(source);
    if (len > 0 && source[len - 1] == '\n')
        source[len - 1] = '\0';

    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}
