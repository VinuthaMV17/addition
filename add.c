#include <stdio.h>
int add(int n1, int n2)
{
    return n1+n2;
}
int main() 
{
    int n1, n2,result;
    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    result = add(n1, n2);
    printf("The sum of %d and %d is: %d\n", n1, n2, result);
 return 0;
}
    
