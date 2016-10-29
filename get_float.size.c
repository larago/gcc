#include <stdio.h>
#include  <float.h>

int main(){
    printf("float max size: %lu \n", sizeof(float));
    printf("float max num: %E\n", FLT_MIN);
    printf("float min num: %E\n", FLT_MAX);
    printf("prcision: %d\n", FLT_DIG);

    return 0;
}