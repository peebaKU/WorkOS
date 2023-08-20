#include <stdio.h>
#include<stdlib.h>

int numgobal=3;
int numgobal1=3;
int numgobal2=3;
int numgobal3=3;

int ShowStack(int num){
    printf("%d : %p \n",num,&num);   
    if(num==0){
        return 0;
    }
    ShowStack(num-1); 
}

int ShowHeap(int num){
    int *a = malloc(num* sizeof(int));
    int *b = malloc(numgobal1* sizeof(int));
    int *c = malloc(numgobal2* sizeof(int));
    int *d = malloc(numgobal3* sizeof(int));
    printf("d: %p\n",d);
    printf("c: %p\n",c);
    printf("b: %p\n",b);
    printf("a: %p\n",a);
}

int main() {
    printf("Stack\n");
    ShowStack(numgobal);
    printf("Heap\n");
    ShowHeap(numgobal);
    printf("Data\n");
    printf("numgobal: %p\n",numgobal);
    printf("numgobal1: %p\n",numgobal1);
    printf("numgobal2: %p\n",numgobal2);
    printf("numgobal3: %p\n",numgobal3);
    return 0;
}
