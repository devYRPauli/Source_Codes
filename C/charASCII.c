#include <stdio.h>
int main()
{
        for(char i = 'A'; i<='Z'; i++)
        {
                printf("%c %d\n", i, i);
        }
        for(char j = 'a'; j<='z'; j++)
        {
                printf("%c %d\n", j, j);
        }
        return 0;
}