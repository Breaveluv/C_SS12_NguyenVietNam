#include <stdio.h>
void printArray(int a[],int size){
    for(int i = 0;i<size;i++){
        printf("%d\n",a[i]);
    }
}
int main() {
    int b[]={2,3,4,5};
    int length= sizeof(b)/sizeof(int);
    printArray(b,length);
    return 0;
}