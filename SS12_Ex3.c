#include <stdio.h>
int giaiThua(int a){
    int tich =1;
    for(int i=1;i<=a;i++){
        tich*=i;
    }
    return tich;
}
int main() {
    printf("Giai thua cua %d la %d", 6,giaiThua(6));
    return 0;
}