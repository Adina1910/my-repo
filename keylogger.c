#include <stdio.h>

int main() {
    char a;
    FILE *f = fopen("log.txt", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Type something (press Enter to finish):\n");
    while ((a = getchar()) != '\n') {
        fputc(a, f);  // log character
    }

    fclose(f);
    printf("Keystrokes saved to log.txt\n");
    return 0;
}