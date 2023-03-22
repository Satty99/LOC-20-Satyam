#include <stdio.h>
void main()
{

    int vowels = 0, consonants = 0;

    int i;
    char a[7];
    for (i = 0; i < 7; i++)
    {
        scanf("%s", a[i]);
    }
    for (i = 0; i < 7; i++)
    {
        printf("%s", a[i]);
    }

    for (i = 0; a[i] != '\0'; i++)
    {

        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            vowels++;

        else

            consonants++;
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
}
