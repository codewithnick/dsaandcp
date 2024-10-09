#include<stdio.h>
static int N=0;
void insert(int arr[])
{
    N++;
    if(N<=5)
    {
        int num , loc;
        printf("Enter Element to be Added: ");
        scanf("%d",&num);
        printf("Enter Location at which element to be Inserted: ");
        scanf("%d",&loc);
        if(loc>N)
        {
            loc=N;
        }
        for(int i=N-1 ; i>=loc ; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[loc-1]=num;
        printf("Insertion Complete...\n\n");
    }
    else
    {
        printf("Sorry Array is Full...\n\n");
    }
}
void delete(int arr[])
{
    int loc;
    if(N==0)
    {
        printf("Array is Empty...\n\n");
        return;
    }
    printf("Enter Position to be Deleted: ");
    scanf("%d",&loc);
    for(int i=loc-1 ; i<N ; i++)
    {
        arr[i]=arr[i+1];
    }
    N--;
    printf("Deletion Complete...\n");
}
void display(int arr[])
{
    if(N==0)
    {
        printf("Array is Empty...\n\n");
        return;
    }
    else
    {
        printf("Array: ");
        for(int i=0 ; i<N ; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int array[5];

    int choice;
    printf("~~~~~~WELCOME~~~~~~\n");
    while(1)
    {
        printf("\nPress 1. for Inserting Element\n");
        printf("Press 2. for Deletion\n");
        printf("Press 3. for Display\n");
        printf("Press 4. for Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert(array);
                break;
            }
            case 2:
            {
                delete(array);
                break;
            }
            case 3:
            {
                display(array);
                break;
            }
            case 4:
            {
                printf("Bye Bye...\n");
                return 0;
            }
            default:
            {
                printf("Please Enter Valid Choice...\n");
            }
        }
    }
}
