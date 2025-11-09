#include <stdio.h>
#include <string.h>
int main() {
    char plaintext[] = "ADINAENCRYPTING";   
    int keyOrder[] = {3, 1, 4, 2};          
    int keyLength = 4;                      
    char matrix[10][10];                    
    char ciphertext[50];                    
    int len = strlen(plaintext);
    int rows = len / keyLength;
    if (len % keyLength != 0)
        rows += 1; 
    printf("Plaintext: %s\n", plaintext);
    printf("Key Order: 3 1 4 2\n");
    int index = 0;
    printf("\nStep 1: Write Text in Grid (based on key length = %d)\n", keyLength);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < keyLength; j++) {
            if (index < len)
                matrix[i][j] = plaintext[index++];
            else
                matrix[i][j] = 'X'; 
            printf("%c ", matrix[i][j]);}
        printf("\n");}
    int k = 0;
    printf("\nStep 2: Read According to Key Order (3 - 1 - 4 - 2)\n");
    for (int orderIndex = 0; orderIndex < keyLength; orderIndex++) {
        int col = keyOrder[orderIndex] - 1; 
        printf("Column %d ", keyOrder[orderIndex]);
        for (int i = 0; i < rows; i++) {
            ciphertext[k++] = matrix[i][col];
            printf("%c", matrix[i][col]);}
        printf("\n");}
    ciphertext[k] = '\0';
    printf("\nCiphertext: %s\n", ciphertext);
    return 0;}