#include <stdio.h>
int main(){
    char ch;
    printf("\nEnter any character:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nVowel");
            break;

        default:
            printf("\nNot a vowel");

    }
    return 0;
}


