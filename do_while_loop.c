#include <stdio.h>
// write an program to print first n natural no. while using do while loop.
int main()
{
    int i = 0;
    int n;

    printf("Enter the your number %d", &n);

    scanf("%d", &n);

    do
    {
        printf("here is your number %d\n", i+1);
         i++;
    } while (i < n);
   

    return 0;
}