#include <stdio.h>
int main(){
    float mark;
    printf("marks : ");
    scanf("%f",&mark);
    if(mark>=90 && mark<=100) printf("A\n");
    else if(mark>=70 && mark<=89) printf("B\n");
    else if(mark>=50 && mark<=69) printf("C\n");
    else if(mark>=35 && mark<=49) printf("D\n");
    else printf("F\n");

    return 0;
}
