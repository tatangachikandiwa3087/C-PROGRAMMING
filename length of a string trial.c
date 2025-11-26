#include <stdio.h>
//#include <string.h>

int main() 
{
    char name[100];
    int n = 0;
    printf("Enter name: ");
    scanf("%s",& name);  // No '&' needed for arrays
    while (name[n] != '\0')
	{
        n++;
    }
    printf("Length of name: %d\n", n);
    return 0;
}

