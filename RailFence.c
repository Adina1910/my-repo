#include <stdio.h>
#include <string.h>

void railFenceEncrypt(char *text, int key, char *result) {
    int len = strlen(text);
    char rail[key][len];
    memset(rail, '\n', sizeof(rail));
    int row = 0, dir_down = 0;
    for (int i = 0; i < len; i++) {
        rail[row][i] = text[i];
        if (row == 0 || row == key - 1)
            dir_down = !dir_down;
        row += dir_down ? 1 : -1;
    }
    int k = 0;
    for (int i = 0; i < key; i++)
        for (int j = 0; j < len; j++)
            if (rail[i][j] != '\n')
                result[k++] = rail[i][j];
    result[k] = '\0';
}

void railFenceDecrypt(char *cipher, int key, char *result) {
    int len = strlen(cipher);
    char rail[key][len];
    memset(rail, '\n', sizeof(rail));
    int row = 0, dir_down = 0;
    for (int i = 0; i < len; i++) {
        rail[row][i] = '*';
        if (row == 0 || row == key - 1)
            dir_down = !dir_down;
        row += dir_down ? 1 : -1;
    }
    int k = 0;
    for (int i = 0; i < key; i++)
        for (int j = 0; j < len; j++)
            if (rail[i][j] == '*')
                rail[i][j] = cipher[k++];
    row = 0, dir_down = 0;
    for (int i = 0; i < len; i++) {
        result[i] = rail[row][i];
        if (row == 0 || row == key - 1)
            dir_down = !dir_down;
        row += dir_down ? 1 : -1;
    }
    result[len] = '\0';
}

int main() {
    char text[] = "ADINAENCRYPTING";
    int key = 3;
    char encrypted[100], decrypted[100];
    railFenceEncrypt(text, key, encrypted);
    printf("Encrypted (Rail Fence): %s\n", encrypted);
    railFenceDecrypt(encrypted, key, decrypted);
    printf("Decrypted (Rail Fence): %s\n", decrypted);
    return 0;
}
