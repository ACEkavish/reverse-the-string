#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length of string
    while(str[length] != '\0')
    {
        length++;
    }

    printf("Reversed string: ");

    // Print string in reverse
    for(i = length - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }

    return 0;
}
