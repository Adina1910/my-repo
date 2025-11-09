#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(void) {
    char buffer[8];
    uint32_t secret = 0xDEADBEEF;
    char input[200];

    printf("Initial secret = 0x%08X\n", secret);
    printf("Enter a string:\n");

    if (fgets(input, sizeof input, stdin) == NULL) return 0;
    input[strcspn(input, "\n")] = '\0';

    strncpy(buffer, input, sizeof buffer - 1);
    buffer[sizeof buffer - 1] = '\0';

    printf("Buffer stored: \"%s\"\n", buffer);
    printf("secret after copy = 0x%08X\n", secret);
    size_t inlen = strlen(input);
    if (inlen > sizeof buffer) {
        unsigned char *b = (unsigned char *)(input + sizeof buffer);
        uint32_t simulated = 0;
        for (size_t i = 0; i < 4 && i < inlen - sizeof buffer; ++i)
            simulated |= ((uint32_t)b[i]) << (8 * i);
        printf("Simulated overwritten secret = 0x%08X\n", simulated);
    } else {
        printf("No overflow simulated (input fits buffer).\n");
    }
    return 0;
}
