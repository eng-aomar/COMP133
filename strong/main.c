#include <stdio.h>
#include <string.h>


int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int is_lower(char c) {
    return c >= 'a' && c <= 'z';
}

int is_upper(char c) {
    return c >= 'A' && c <= 'Z';
}

int is_special(char c) {
    return c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-' || c == '+' ;
}

int is_valid_password(char *password) {
    int length = strlen(password);
    int has_digit = 0, has_lower = 0, has_upper = 0, has_special = 0;

    for (int i = 0; i < length; i++) {
        if (is_digit(password[i]))
            has_digit = 1;
        else if (is_lower(password[i]))
            has_lower = 1;
        else if (is_upper(password[i]))
            has_upper = 1;
        else if (is_special(password[i]))
            has_special = 1;
    }

    return length >= 8 && has_digit && has_lower && has_upper && has_special;
}

int main() {
    char password[100];
    printf("Enter your password: ");
    scanf("%s", password);

    if (is_valid_password(password))
        printf("Valid password.\n");
    else
        printf("Invalid password.\n");

    return 0;
}
