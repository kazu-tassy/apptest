#include <stdio.h>
#include "local.h"

int main(void)
{
    int val;
    val = add(1, 1);
    printf("add ans=%d\n", val);
    val = add2(1, 2, 3);
    printf("add2 ans=%d\n", val);

    val = sub(2, 1);
    printf("sub ans=%d\n", val);
}