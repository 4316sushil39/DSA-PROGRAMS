#include <stdio.h>
#define MAX_SIZE 100
void insert(int *list, int *size)
{
    int pos, value;
    printf("Enter position :");
    scanf("%d", &pos);
    printf("Enter value :");
    scanf("%d", &value);
    if (pos < 0 || pos > *size || pos > MAX_SIZE)
        printf("Invalid position !!!!!\n");
    else
        if(pos == *size)
        {
            list[pos] = value;
            *(size)++;
        }
}
int main()
{
    int list[MAX_SIZE], size, i;
    printf("Enter size :");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    while (1)
    {
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. searching\n");
        printf("4. Transvering\n");
        printf("Exit\n");
        int choice;
        printf("Enter choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            printf("Invalid choice!!!!\n");
        }
    }
    return 0;
}