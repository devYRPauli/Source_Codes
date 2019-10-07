#include <stdio.h>
int main()
{
        char i;
        printf("Enter your character;");
        scanf("%c", &i);
        if(i >= 'A' & i <= 'Z')
        {
                printf("%c is Uppercase Letter. \n", i);
        }
        else if(i >= 'a' & i <= 'z')
        {
                printf("%c is Lowercase Letter. \n", i);
        }
        else if(i >= '0' & i <= '9')
        {
                printf("%c is a Digit. \n", i);
        }
        else
        {
                printf("%c is a Special Character. \n", i);
        }
        return 0;
}