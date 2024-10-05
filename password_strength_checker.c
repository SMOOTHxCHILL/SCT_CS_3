#include <stdio.h>

int main() {
    char pass;
    printf("Enter your to assess its quality:\n");
    scanf("%s", &pass);
    for (i in pass) {
        int lnt += 1;
        if (isupper(i)) {
            int upr += 1;
        }
        if (islower(i)) {
            int lwr += 1;
        }
        if (isalpha(i) not True) {
            if (isspace(i) not True) {
                int sym += 1;
            }
        }
        if (isdigit(i)) {
            int num += 1;
        }
        printf("Length:%d", lnt);
        printf("Uppercase letters:%d", upr);
        printf("Lowercase letters:%d", lwr);
        printf("Symbols:%d", sym);
        printf("Numbers:%d", num);
    }
}
