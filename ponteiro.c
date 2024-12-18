#include <stdio.h>
// ponteiros
int main(){
    int a= 10;
    int *pont_a;
    pont_a =&a;
    int **pa;
    pa = &pont_a;
    int ***p;
    p = &pa;
    printf("%d",***p);
return 0;
}