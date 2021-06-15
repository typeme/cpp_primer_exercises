#include <iostream>
#include "chapter6.h"

int count() {
    static int count = 0;
    return count++;

}