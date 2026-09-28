#include "swap_utils.h"

void swapnum(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
