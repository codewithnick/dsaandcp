#include <stdio.h>
#define row 3
#define col 3
static int curr_row =0;
static int curr_col=0;
static int array[row][col];
void insert();
void display();
void del();
int main()
{
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
                insert();
                break;
            }
            case 2:
            {
                del();
                break;
            }
            case 3:
            {
                display();
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

void insert(){
    if (curr_col==col && curr_row==row)
    {
        printf("Array already full ");
        return ;
    }
    //increasing size
    curr_col++;
    if(curr_col>=3){
        curr_row++;
        curr_col=0;
    }
    int num,r,c,i,j,x=col-1;
    int swapon=0;
    printf("Enter Element to be Added: ");
    scanf("%d",&num);
    printf("Enter row at which element to be Inserted: ");
        scanf("%d",&r);
    printf("Enter col at which element to be Inserted: ");
        scanf("%d",&c);
    r--;
    c--;
    int next_elem=0;
    for(i=0;i<=curr_row;i++){
        if(i==curr_row)
            x=curr_col;
        for(j=0;j<=x;j++){

            //if swapon is on we start shifting elements to next element
            if(swapon==1){
                int currelem=array[i][j];
                //printf("currelem %d\n",currelem);
                //printf("nextelem %d\n",next_elem);
                if(next_elem)
                array[i][j]=next_elem;
                next_elem=currelem;
            }
            else if(r==i && c==j)
            {
                swapon=1;
                next_elem=array[i][j];
                array[i][j]=num;
            }
        }
    }

    printf("Insertion Complete...\n\n");
}

void display(){
    int i,j,c=col-1;
    //printf("row size %d\n",curr_row);
    //printf("col size %d\n",curr_col);
    printf("Array:\n");
    for(i=0;i<=curr_row;i++)
    {
        if(i==curr_row)
            c=curr_col;
        for(j=0;j<=c;j++)
        {
            if(i==curr_row &&j==curr_col)
                break;
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void del(){
    if(curr_col==0 && curr_row==0)
    {
        printf("array is already empty\n");
        return ;
    }

int i,j,x=col-1,c,r,prev_r=0,prev_c=0,swapon=0;
  printf("Enter row to be Deleted: ");
    scanf("%d",&r);
      printf("Enter col to be Deleted: ");
    scanf("%d",&c);
    r--;
    c--;
  for(i=0;i<=curr_row;i++)
    {
        if(i==curr_row)
            x=curr_col;
        for(j=0;j<=x;j++)
        {
            if(swapon==1)
              {
                  //shift curr elem to prev index
                  array[prev_r][prev_c]=array[i][j];

              }
            else if(i==r && j==c)
              {
                  swapon=1;
              }
            prev_r=i;
            prev_c=j;
        }
    }
//resetting size
curr_col--;
if(curr_col==-1){
    curr_col=2;
    curr_row--;
}
}
