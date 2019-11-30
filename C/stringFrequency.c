#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[1000];
    int arr[1000];
    int lengthString;
    printf("Enter string. \n");
    gets(inputString);
    for(int lv1=0; lv1<1000; lv1++)
    {
        arr[lv1] = 0;
    }
    lengthString = strlen(inputString);
    for(int lv2=0; lv2<lengthString; lv2++)
    {
        arr[inputString[lv2]]++;
    }
    for(int lv3; lv3<lengthString; lv3++)
    {
        if(arr[inputString[lv3]] != 0)
        {
            printf("Frequency of %c is :%d \n",inputString[lv3], arr[inputString[lv3]]);
            arr[inputString[lv3]]=0;
        }
    }
    return 0;
}
