#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct myArray *a,int tSize, int uSize){
    a->totalSize = tSize;
    a->usedSize = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}
void setval(struct myArray *a){
    int n;
    for(int i = 0; i < a->usedSize; i++){
        printf("\nEnter Element: %d ",i+1);
        scanf("%d",&n);
        (a->ptr)[i] = n;

    }
}
void show(struct myArray *a){
    for(int i = 0; i < a->usedSize; i++){
        printf("\n%d",(a->ptr)[i]);
    }
}
int main(){
 struct myArray marks;
 createArray(&marks,5,3);
 printf("\n Setting the values:");
 setval(&marks);
 printf("\n Displaying the value:");
 show(&marks);


    return 0;
}