#include <stdio.h>
#include<stdlib.h>


int numgobal1;
int numgobal2;
int numgobal3;

int ShowStack(int num){
    printf("%d : %p \n",num,&num);   
    if(num==0){
        return 0;
    }
    ShowStack(num-1); 
}

int ShowHeap(int num){
    int *a = malloc(3);
    int *b = malloc(3);
    int *c = malloc(3);
    int *d = malloc(3);
    printf("d: %p\n",d);
    printf("c: %p\n",c);
    printf("b: %p\n",b);
    printf("a: %p\n",a);
}



int main() {
    printf("Stack\n");
    ShowStack(3);
    printf("Heap\n");
    ShowHeap(3);
    return 0;
}