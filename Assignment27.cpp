#include<stdio.h>

int pass(int *);

int main(){
    int a[5] = {1,2,3,4,5};
    pass(a);
    return 0;
}

int pass(int *b){
    for(int i=0;i<5;i++)
    {
        printf("%d\n", b[i]);
    }
}

