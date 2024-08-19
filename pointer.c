#include <stdio.h>

void update(int *a,int *b) {
    int temp =*a;//storing a value to an variable
    *a=*a + *b;
    *b=abs(temp-*b);//*abs-->absolute value in math.h header file returns                                  only positive value
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
