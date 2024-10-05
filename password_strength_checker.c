#include <stdio.h>
#include <ctype.h>

int main() {
    char pass[100];
    int i, lnt = 0, upr = 0, lwr = 0, sym = 0, num = 0;
    printf("Enter your to assess its quality:\n");
    scanf("%s", &pass);
    for (i = 0; pass[i] != '\0'; i++) {
        lnt += 1;
        if (isupper(pass[i])) {
            upr++;
        }
        if (islower(pass[i])) {
            lwr++;
        }
        if (!isalpha(pass[i])) {
            if (!isspace(pass[i])) {
                if (!isdigit(pass[i])) {
                    sym++;
                }
            }
        }
        if (isdigit(pass[i])) {
            num++;
        }
    }
    printf("Length:%d\n", lnt);
    printf("Uppercase letters:%d\n", upr);
    printf("Lowercase letters:%d\n", lwr);
    printf("Symbols:%d\n", sym);
    printf("Numbers:%d\n", num);
}
