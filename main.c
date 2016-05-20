#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100
#define PRINT_LINE 1
int array[SIZE];
int * getRandArray(){
    srand(time(NULL));
    int i = 0;
    while(i < SIZE){
        array[i] = rand() % SIZE;
        i++;
    }
    return array;
}
void printArrayLine(){
    int i = 0;
    while(i < SIZE){
        int j = 0;
        while(j < array[i]){
            printf("-");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}
void printArray(){
    printf("array is:\n");
    int i = 0;
    while(i < SIZE){
        printf("%d\t",array[i]);
        i++;
        if(i % 10 == 0){
            printf("\n");
        }
    }
    printf("\n");
    if(!PRINT_LINE){
        printArrayLine();
    }
}
void do_sort(){
    int i = 0,j = 0;
    for(;i < SIZE - 1;i++){
        for(j = 0;j < SIZE - 1 - i;j++){
            if(array[j] > array[j+1]){
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }

}
int main(int agrc,char *argv[]){
    printf("RAND_MAX is %d.\n",RAND_MAX);
    getRandArray();
    printArray();
    do_sort();
    printf("after sort\n");
    printArray();
    return 0;
}
