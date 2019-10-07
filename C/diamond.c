#include <stdio.h>
int main()
{
        int row;
        int k=1;
        printf("Enter the number of rows you want.");
        scanf("%d", &row);
        for(int i=1; i<=row; i++)
        {
                for(int j=row; j>=k; j--)
                {
                        printf("*");
                }
                printf("\n");
                k=k+1;
        }
        return 0;
}