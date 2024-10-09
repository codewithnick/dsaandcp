#include <stdio.h>

int main(){
    int i,j;
    char a[10],b[10],c[20];
    printf("enter string 1 ");
    scanf("%s",a);
    fflush(stdin);
    printf("enter string 2 ");
    scanf("%s",b);
    fflush(stdin);
    for(i=0;i<10;i++)
    {
        if(a[i]==' ' || a[i]=='\n' || a[i]=='\0')
            break;
        c[i]=a[i];
    }
    for(j=0;j<10;j++,i++)
    {
        if(b[j]==' ' || b[j]=='\n' || b[j]=='\0')
            break;
        c[i]=b[j];
    }
    c[i]='\0';
    printf("concatenated string :%s",c);
return 0;
}
