#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ",1<<i);
        }
    }
    else{
        printf("Error : Number should be an positive number.\n");
    }
}
