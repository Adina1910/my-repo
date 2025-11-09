#include <stdio.h>
#include <math.h>
int main() {
    int prime, base, privA, privB;
    printf("Enter the prime number (n): ");
    scanf("%d", &prime);
    printf("Enter the primitive root (g): ");
    scanf("%d", &base);
    printf("Enter private key for User 1: ");
    scanf("%d", &privA);
    printf("Enter private key for User 2: ");
    scanf("%d", &privB);
    double pubA = fmod(pow(base, privA), prime);
    double pubB = fmod(pow(base, privB), prime);
    double sharedX = fmod(pow(pubB, privA), prime);
    double sharedY = fmod(pow(pubA, privB), prime);
    printf("\nUser 1 sends public key: %d\n", (int)pubA);
    printf("User 2 sends public key: %d\n", (int)pubB);
    printf("\nUser 1 computes shared key: %d\n", (int)sharedX);
    printf("User 2 computes shared key: %d\n", (int)sharedY);
    if ((int)sharedX == (int)sharedY)
        printf("\nKey Exchange Successful! Shared Secret Key = %d\n", (int)sharedX);
    else
        printf("\nKey Exchange Failed.\n");
    return 0;}
