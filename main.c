#include <stdio.h>
#include <conio.h>

void main() {
    int a,b,c;
    printf("Show unary operation \n");
    scanf("%d %d",&a,&b);
    printf("Value of a=%d, b=%d \n",a,b);
    a++;
    b--;
    printf("Value of a=%d, b=%d \n",a,b);
    getch();
}