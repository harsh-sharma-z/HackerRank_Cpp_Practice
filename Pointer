#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    
    int sum=*a+*b;
    int d=*a-*b;
    
    *a=sum;
    
    if(d>0)
    *b=d;
    else {
    *b=-1*d;
    }  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
