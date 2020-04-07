#include <iostream>

#include <stdint.h>


int sumsTo(uint x[], uint n, uint k, uint v) {
    if (v==0 && k==0)
        return true;
    if (v!=0 && k==0)
        return false;
    if (n==0)
        return false;
    int res1 = 0;
    if (v >= x[0])
        res1 = sumsTo(x+1, n-1, k-1, v-x[0]);
    int res2 = sumsTo(x+1, n-1, k, v);
    return res1+res2 > 0;
}

int main() {
    uint one[] = {1,2,3,4,5,6};
    printf("%d", sumsTo(one, sizeof(one), 2, 65));
    printf("%d", sumsTo(one, sizeof(one), 2, 10));
    printf("%d", sumsTo(one, sizeof(one), 2, 6));
    printf("%d", sumsTo(one, sizeof(one), 2, 15));
    printf("%d", sumsTo(one, sizeof(one), 2, 8));
}
