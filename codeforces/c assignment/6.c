#include <stdio.h>
int main(){
    char a[50];
    printf("enter a string : ");
    gets(a);
    for (int i=0;i<50;i++){
        if(a[i]=='\0'||a[i]=='\n')
            break;
        printf("%c",(a[i]-32));
    }
return 0;
}
