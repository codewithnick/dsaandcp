#include <stdio.h>
int x;
int main(){
    char arr[]="Deltax";
    printf("%s",arr+3);
    int x=97,i=1    ;
    int y=sizeof(x++);
    printf("%d",x);
    x=0;
    if(x++>0)
        printf("true\n");
    printf("%d %d %d",i++,i,++i);

return 0;
}
