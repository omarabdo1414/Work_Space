#include <stdio.h>

int main()
{
    int binary,decimal,weight,rem;
    printf("Enter the binary number : ");
    scanf("%d",&binary);

    decimal = 0; weight = 1;

    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem*weight;
        binary = binary / 10;
        weight = weight * 2;
    }
    printf("The number in decimal is : %d",decimal);
return 0;
}
