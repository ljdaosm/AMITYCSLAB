#include <stdio.h>
int main() 
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c== 'a' || c == 'e' || c=='i' || c=='o' || c=='u') || (c== 'A' || c == 'E' || c=='I' || c=='O' || c=='U'))
        printf("%c is a vowel.", c);
    else
        printf("%c is not a vowel.", c);

    return 0;
}