#include<stdio.h>

int sum(int *);

int main(){
    int a[5] = {2,4,6,8,10}, s;
    s = sum(a);
    printf("Sum of elements= %d", s);
    return 0;
}
int sum(int *count){
    int s = 0;
    for(int i=0; i<5; i++){
        s=s+*count;
        count=count+1;
    }
    return s;
}