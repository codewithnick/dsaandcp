#include <stdio.h>
#define line printf("\n________________");

struct Stud{
char name[20];
int roll_no;
int age;
int marks;
char grade;
};
void printgradecard(struct Stud);
int main(){
    struct Stud stu;
    int i;
    float avg=0;
    for(i=0;i<50;i++){
        printf("enter name of student : ");
        fflush(stdin);
        gets(stu.name);
        printf("enter roll no of student : ");
        fflush(stdin);
        scanf("%d",&stu.roll_no);
        printf("enter age of student : ");
        fflush(stdin);
        scanf("%d",&stu.age);
        printf("enter marks of student : ");
        fflush(stdin);
        scanf("%d",&stu.marks);
        switch(stu.marks){
            case 90 ... 100:
            stu.grade='O';
            break;
            case 80 ... 89:
            stu.grade='A';
            break;
            case 70 ... 79:
            stu.grade='B';
            break;
            case 60 ... 69:
            stu.grade='C';
            break;
            case 50 ... 59:
            stu.grade='D';
            break;
            case 36 ... 49:
            stu.grade='P';
            break;
            default:
            stu.grade='F';
            break;
        }
        printgradecard(stu);
        printf("\n");
    }

return 0;
}

void printgradecard(struct Stud stu){
    line;
    printf("\n   Grade Card   ");
    printf("\nName: %s",stu.name);
    printf("\nAge: %d",stu.age);
    printf("\nRoll No: %d",stu.roll_no);
    printf("\nMarks: %d\n",stu.marks);
    printf("\nGrade: %c\n",stu.grade);

    line;
    printf("\n");
}
