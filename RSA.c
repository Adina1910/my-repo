/*#include <stdio.h>
#include <string.h>
// Function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// Function to find multiplicative inverse of e under mod phi
int find_d(int e, int phi) {
    int d = 1;
    while ((d * e) % phi != 1)
        d++;
    return d;
}
// Modular exponentiation function: (base^exp) % mod
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp / 2;
        base = (base * base) % mod;
    }
    return result;
}
int main() {
    int p, q, e;
    char pt[100];
    long long c[100];
    char decrypted[100];
    printf("Enter Plaintext: ");
    scanf("%s", pt);
    printf("\nEnter 2 large prime numbers: ");
    scanf("%d %d", &p, &q);
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    printf("\nEnter value for e such that 1 < e < %d and GCD(e, %d) = 1: ", phi, phi);
    scanf("%d", &e);
    if (gcd(e, phi) != 1) {
        printf("Invalid e! It must be coprime with %d.\n", phi);
        return 0;
    }
    int d = find_d(e, phi);
    printf("\nPublic Key: {%d, %d}", e, n);
    printf("\nPrivate Key: {%d, %d}", d, n);
    int len = strlen(pt);
    // Encryption
    printf("\n\nEncrypted Message: ");
    for (int i = 0; i < len; i++) {
        int m = (int)pt[i];
        c[i] = mod_exp(m, e, n);
        printf("%lld ", c[i]);
    }
    printf("\n");
    return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int p, q, e;
    char pt[100];
    int c[100];
    printf("Enter a Plain Text:");
    scanf("%s", pt);
    printf("\nEnter 2 large prime numbers:");
    scanf("%d %d", &p, &q);
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    printf("\nEnter the value for e such that 1<e<%d and gcd(e,%d) = 1: ", phi, phi);
    scanf("%d", &e);
    int len = strlen(pt);
    for (int i = 0; i < len; i++)
    {
        int m = (int)pt[i];
        double power_val = pow(m, e);
        double mod_val = fmod(power_val, n);
        c[i] = (int)mod_val;
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
