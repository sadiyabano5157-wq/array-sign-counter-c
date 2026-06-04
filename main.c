#include <stdio.h>

int main()
{
    int arr[5];

    
    for(int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

  
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > 0)
        {
            printf("Positive number = %d\n", arr[i]);
            positive_count++;
        }
        else if(arr[i] < 0)
        {
            printf("Negative number = %d\n", arr[i]);
            negative_count++;
        }
        else
        {
            printf("Zero number = %d\n", arr[i]);
            zero_count++;
        }
    }

    
    printf("\nTotal positive numbers = %d\n", positive_count);
    printf("Total negative numbers = %d\n", negative_count);
    printf("Total zero numbers = %d\n", zero_count);

    return 0;
}
