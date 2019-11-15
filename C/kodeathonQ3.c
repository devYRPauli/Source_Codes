#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[9];
    int testCases, digits, s, arrayFunction[9], rem, index, newIndexValue, number=0;
    
    printf("Enter the number of TestCases. \n");
    scanf("%d", &testCases);
    while(testCases--)
    {
        int newNumber=0;
        //Handling inputs from the user
        printf("Enter the number of digits. \n");
        scanf("%d", &digits);
        printf("Enter the number to be extracted for the password. \n");
        scanf("%d", &s);
        printf("Enter the array function from which the password is to be extracted. \n");
        
        //Taking the function in the form of an array
        for(int i=0; i<9; i++)
        {
            scanf("%d", &arrayFunction[i]);
        }
        
        //Comparing the indexes of the number with the array function
        while(digits--)
        {
            rem = s % 10;
            index = rem - 1;
            newIndexValue = arrayFunction[index];
            if(index >= newIndexValue)
            {
                newIndexValue = index+1;
            }
            s = s / 10;
            number = number*10 + newIndexValue;
        }
        
        //Reversing the number so as to get the originalm number
        while(number != 0)
        {
            rem = number % 10;
            newNumber = newNumber*10 + rem;
            number = number / 10;
        }
        
        //Finally, printing the password for the gate
        printf("::PASSWORD::\n");
        printf("%d\n", newNumber);
    }
    return 0;
}
