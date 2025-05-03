// adv-programme.15
#include <stdio.h>
#include <string.h>

void delete_char(char* S, char c) {
    int i = 0, j = 0;

    while (S[i] != '\0') {
        if (S[i] != c)
            S[j++] = S[i];

        ++i;
    }

    S[j] = '\0';
} 

int main() {
    char str[1024];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
    
    char c;
    scanf("%c", &c);

    delete_char(str, c);

    printf("%s", str);

    return 0;
}