#include <stdio.h>

int main(){
    int s,a,b,c,p;
    scanf("%d %d %d",&s,&a,&b,&c);
    p=s+(s*c/100);
    if (a <= p <= b){
        printf("Yes");
    }
     else {
         printf("No");
     }
    return 0;
}