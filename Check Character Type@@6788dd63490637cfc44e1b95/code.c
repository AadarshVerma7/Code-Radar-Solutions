#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf(" %c", &a);

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || 
        a=='A' || a=='E' || a=='I' || a=='O' || a=='U') {
        printf("Vowel");
    }
    else if (isdigit(a)) {
        printf("Digit");
    }
    else if (a == '@') {
        printf("Special Character");
    }
    else {
        printf("Consonant");
    }
    return 0;
}
