#include <stdio.h>
#include <ctype.h>

int main() {
    char pass[100];
    int i, lnt = 0, upr = 0, lwr = 0, sym = 0, num = 0;
    printf("Enter your to assess its quality:\n");
    scanf("%s", pass);
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
    printf("Uppercase alphabets:%d\n", upr);
    printf("Lowercase alphabets:%d\n", lwr);
    printf("Symbols:%d\n", sym);
    printf("Numbers:%d\n", num);
    
    //0 stands for weak; 1 for fair; 2 for strong
    int str1 = 0, str2 = 0, str3 = 0, str4 = 0, str5 = 0, strength = 0;
    //strength measurement of length
    if (lnt < 8) {
        str1 = 0;
    }
    else if (lnt >= 8 && lnt < 12) {
        str1 = 1;
    }
    else {
        str1 = 2;
    }
    
    //strength measurement of Uppercase
    if (upr >= 1) {
        str2 = 2;
    }
    else {
        str2 = 0;
    }
    
    //strength measurement of Lowercase
    if (lwr >= 1) {
        str3 = 2;
    }
    else {
        str3 = 0;
    }
    
    //strength measurement of Symbols
    if (sym >= 1) {
        str4 = 2;
    }
    else {
        str4 = 0;
    }
    
     //strength measurement of Numbers
    if (num >= 1) {
        str5 = 2;
    }
    else {
        str5 = 0;
    }
    
    strength = str1+str2+str3+str4+str5;
    if (strength < 4) {
        printf("\nPassword strength is Weak");
    }
    else if (strength >= 4 && strength < 8) {
        printf("\nPassword strength is Fair");
    }
    else {
        printf("\nPassword strength is Strong");
    }
}
