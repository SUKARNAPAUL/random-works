#include<stdio.h>

void cal(int a, int b, int *i, int *j, int *k, int *l){
    *i = a+b;
    *j= a-b;
    *k= a*b;
    *l= a/b;
}

int main(){
    int x=3,y=1;
    int sum, sub, multi, divi;
    cal(x,y, &sum, &sub, &multi, &divi);
    printf("%d %d %d %d",sum, sub, multi, divi );
}
