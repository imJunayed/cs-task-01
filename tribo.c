#include <stdio.h> 

int main(){
    
    int limit, a=0, b=1, c=1, i, tribo;
    
    printf("Please enter the end limit: ");
    scanf("%d", &limit);
    
    if (limit >= 1) printf("%d ", a);
    if (limit >= 2) printf("%d ", b);
    if (limit >= 3) printf("%d ", c);
    
    for(i=4; i<=limit; i++){
            tribo = a+b+c;
            printf("%d ", tribo);
            a = b;
            b = c;
            c = tribo;
            tribo  = a+b+c;
    };
    
    return 0;
    
};