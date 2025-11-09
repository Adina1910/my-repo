#include <stdio.h>
int main()
{
    char text[500], ch;
    int key;
    printf("Enter a message to encrypt: ");
    scanf("%s", text);
    printf("Enter the key: ");
    scanf("%d", &key);
    for (int i = 0; text[i] != '\0'; ++i)
    {
        ch = text[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = (ch - 'A' + key) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = (ch - 'a' + key) % 26 + 'a';
        }
        else
        {
            printf("Invalide Message: \n");
            return 1;
        }
        text[i] = ch;
    }
    printf("Encrypted message: %s\n", text);
    return 0;
}